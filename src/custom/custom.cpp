#include "dosbox.h"

#include "json.hpp"

#include "circular_buffer.h"

#include "setup.h"
#include "regs.h"
#include "custom.h"
#include "custom_hooks.h"
#include "utils.h"
#include "dumpexe.h"

#include "asm.h"

#include <stdio.h>
#include <unistd.h>
#include <sstream>

// -- configuration start

// Enable/disable instruction tracing to the circular buffer.
bool trace_instructions = false;
// Enable/disable instruction tracing to stdout (can be slow).
bool trace_instructions_to_stdout = false;
// Enable/disable instruction comparison between emulated and translated code.
bool compare_mode = false;

// Enable/disable handling of complex self-modified code (can be slow).
bool complex_self_modifications = false;
// Enable/disable collection of run-time information like code addresses and
// segment values.
bool collect_rt_info = true;
// Enable/disable collection of memory access information (slower).
bool collect_rt_info_vars = true;

// -- configuration end

// Function to disassemble x86 instructions (defined in DOSBox).
extern Bitu DasmI386(char *buffer, PhysPt pc, Bitu cur_ip, bool bit32);

// masm2c related functions and variables.
namespace m2c {
extern size_t debug;
extern void load_drivers();
} // namespace m2c

// Size of the memory region to compare for instruction tracing.
static const size_t COMPARE_SIZE = 0xf0000;

// Global variable to track the last executed instruction pointer.
Bit32u last_ip = 0xffff;

// Function pointer to the DOSBox CPU loop.
extern Bitu Normal_Loop(void);

// Counter for the number of custom runs.
int custom_runs = 0;

// Variable to store the old CPU cycle count.
Bitu old_cycles;
// Stack to store return points for function calls.
std::stack<Bit32u> return_point;

// Flags to control deferred custom calls and execution context.
volatile bool defered_custom_call = false;
bool from_callf = false;
volatile bool from_interpreter = false;

// Flags to control jump comparison and single-stepping.
volatile bool compare_jump = false;
volatile bool doing_single_step = false;

// Counters for initialization runs.
static int init_runs = 0;
static int init = 0;

// Function to initialize the entry point for translated code.
void init_entrypoint(Bit16u relocate);

// Function to dispatch calls to translated functions.
extern bool __dispatch_call(m2c::_offsets __disp, struct m2c::_STATE *_state);

// Function to print the backtrace (platform-specific).
#ifndef _WIN32
extern void print_backtrace(uintptr_t pc);
#endif

// masm2c related functions and classes.
namespace m2c {
// Function to initialize masm2c.
extern void Initializer();
// Class to manage shadow memory for run-time information.
ShadowMemory shadow_memory;

} // namespace m2c

void masm2c_exit(unsigned char exit)
{
	init++;
	printf("masm2c_exit Exiting\n");
	// m2c::stackDump();
}

// Is the game running?
/**
        init_get_fname - copies the filename from src to dst
        @src:	pathname to a file
        @dst:	string where the filename shoukld be stored
*/
void init_get_fname(char *executable_name_out, char *source_path) { // Clearer variable names for readability
    char *current_position = executable_name_out;  // Store starting point of output buffer
    const char *filename_start = nullptr;         // Initialize pointer to track file name start
    const char *character = (const char *) source_path;           // Iterate through source path

    while (*character != '\0') { // Loop until end of source path is reached
        if (*character == '\\') {  // Identify directory character ('\')
            filename_start = character + 1; // Mark the start of the escaped section
        }
        character++; 
    }

    if (filename_start == nullptr) { // If no escape sequence found, use the entire source path
        filename_start = (char *)source_path; 
    }

    while ((*current_position++ = tolower( * (filename_start++) )) != '\0')  
        ; // Copy characters from filename section to output, converting to lowercase
    *current_position = '\0';  // Null-terminate the resulting executable name

    m2c::exename = executable_name_out; // Update global variable with the processed name
}

namespace m2c {

// Flag to defer IRQs.
bool defered_irqs = false;
// Name of the executable being run.
std::string exename;
// Function to print collected traces.
static void print_traces();

// Function to dump the stack and shadow memory.
void stackDumpZ()
{
	printf("Executing at exit\n");
	m2c::shadow_memory.dump();
	stackDump(0);
}

} // namespace m2c

// Loguru fatal error handler.
void loguru_fatal(const loguru::Message &message)
{
	m2c::stackDumpZ();
}

// Custom initialization function for DOSBox programs.
void custom_init_prog(char *name, Bit16u relocate, Bit16u init_cs, Bit16u init_ip)
{
	// Register fatal error handler and exit handler.
	static bool registered = false;
	if (!registered) {
		loguru::set_fatal_handler(loguru_fatal);
		atexit(m2c::stackDumpZ);
		registered = true;
	}

	// Initialize masm2c and check if it's the target binary.
	if (masm2c_init(name, relocate, init_cs, init_ip)) {
		printf("It is target binary. Rise binary enter flags\n");
		custom_runs++;
		init_runs++;
	}
}

// Custom exit function for DOSBox programs.
void custom_exit_prog(Bit8u exitcode)
{
	// Dump shadow memory.
	m2c::shadow_memory.dump();

	// Check if it was a target binary.
	if (!custom_runs) {
		printf("It wasn't a target binary. Ignoring\n");
		return;
	}

	custom_runs--;
	// Perform deinitialization if needed.
	if (init_runs) {
		printf("Doing deinit\n");
		masm2c_exit(exitcode);
		exit(0);

		init_runs--;
	}
}

// Custom call function for handling translated function calls.
int custom_callf(Bitu CS, Bitu IP)
{
	// Check if it's a target binary and if initialization is complete.
	if (!custom_runs)
		return 0;

	// Check if the call is from a valid code segment.
	if (init_runs) {
		if (CS >= 0xa000 || (CS == 0 && cs == 0xf000))
			return 0;

		// Dispatch the call to the translated function.
		m2c::_STATE _state;
		_state.call_source = 3;
		return __dispatch_call((CS << 16) + IP, &_state);
	}

	return 0;
}

// Custom exit function for DOSBox sections.
static void custom_exit(Section *sec)
{
	custom_exit_prog(0);
}

// Custom initialization function for DOSBox sections.
void custom_init(Section *sec)
{
	// Add the custom exit function.
	sec->AddDestroyFunction(&custom_exit);

	// Print library information.
	fprintf(stderr, "Masm2c/DOSBOX lib, build date %s\n", __DATE__);

	// Unused variable.
	X86_REGREF 
        m2c::_STATE *_state = 0;

	MAPPER_AddHandler(m2c::DumpExe1, SDL_SCANCODE_F2, PRIMARY_MOD, "dumpexe1",
	                  "Dumpexe1");
	//MAPPER_AddHandler(DumpExe2, SDL_SCANCODE_F3, PRIMARY_MOD, "dumpexe1",
	//                  "Dumpexe1");
}

// Custom initialization function for the entry point.
void custom_init_entrypoint(char *name, Bit16u loadseg)
{
	m2c::dumpexe_start_hook(loadseg);

	// Check if it's a target binary and if initialization is complete.
	if (!custom_runs)
		return;

	// Reset last_ip.
	last_ip = 0xffff;


	// Initialize the entry point for translated code.
	if (init_runs) {
		init_entrypoint(loadseg);
	}
}

// masm2c namespace.
namespace m2c {

// Debug level.
#ifdef M2CDEBUG
size_t debug = M2CDEBUG;
#else
size_t debug = 0;
#endif

// Instruction counter.
size_t counter = 0;
// Shadow stack for tracking function calls.
ShadowStack shadow_stack;

// Memory buffers for instruction trace comparison.
db om[COMPARE_SIZE];
db rm[COMPARE_SIZE];
// Old instruction pointer.
dd oldip;
// Old segment registers.
Segments oldSegs;
// Old CPU registers.
CPU_Regs oldcpu_regs;
// Flags from the DOSBox interpreter.
Bitu dbx_result_flags;
// Segment registers from the DOSBox interpreter.
Segments dbx_result_segs;
// CPU registers from the DOSBox interpreter.
CPU_Regs dbx_result_regs;
// Array to track already checked instructions.
bool already_checked[COMPARE_SIZE] = {0};

// Memory buffer for tracking self-modified code.
db lm[COMPARE_SIZE];

// Indentation level for debug output.
db _indent = 0;
// Current instruction string for debug output.
const char *_str = "";

// Function to get a string of spaces for indentation.
const char *log_spaces(int n)
{
	static const char s[] = "                                                                                          ";
	return n <= 84 ? s + (84 - n) : "";
}

// Function to fix segment register values.
bool fix_segs()
{
	for (size_t i = 0; i < 7; i++) {
		Segs.phys[i] = Segs.val[i] << 4;
	}
	return true;
}

// Function to execute pending IRQs.
void execute_irqs()
{
	// Reference the CPU registers.
	X86_REGREF
	//    log_debug ("CPU_CycleLeft %d\n", CPU_CycleLeft);

	// Flag to prevent reentrancy.
	static volatile bool already_in_hw_int = false;

	// Check if interrupts are enabled and not already in an interrupt handler.
	if (!already_in_hw_int && GET_IF()) {
		already_in_hw_int = true;
		{
#if M2CDEBUG
//              log_debug ("Start hw int\n");
#endif
			// Fix segment registers and execute DOSBox idle callbacks.
			fix_segs();
			bool oldCPU_CycleAutoAdjust = CPU_CycleAutoAdjust;
			CPU_CycleAutoAdjust = true; // So the CPU_Cycles won't
			                            // be set to 0
			CALLBACK_Idle();
			CPU_CycleAutoAdjust = oldCPU_CycleAutoAdjust;
#if M2CDEBUG
//              log_debug ("Stop hw int\n");
#endif
		}
		already_in_hw_int = false;
	} else if (!GET_IF() && fix_segs() && !PIC_RunQueue()) // Can only call
	                                                       // PIC_RunQueue()
	                                                       // separatelly if
	                                                       // IF=0
	{ // So no IRQ interrupts will be started
		GFX_Events();
		if (ticksRemain > 0) {
			TIMER_AddTick();
			ticksRemain--;
		} else {
			increaseticks();
		}
	}
}

// Function to run hardware interrupts.
void run_hw_interrupts()
{
	// Collect segment register information if enabled.
	if (collect_rt_info)
		shadow_memory.collect_segs();
	//    X86_REGREF
	// printf("CPU_Cycles %d\n", CPU_Cycles);
	// Decrement CPU cycles if there are any left.
	if (!defered_irqs && CPU_Cycles > 0) {
		CPU_Cycles--;
	}

	// Execute pending IRQs if needed.
	if (defered_irqs || CPU_Cycles == 0) {
		defered_irqs = false;
		//    log_debug ("CPU_CycleLeft %d\n", CPU_CycleLeft);
		execute_irqs();
	}
}

// Function to perform a single-step execution using the DOSBox interpreter.
void dbx_single_step()
{
	// Fix segment registers.
	m2c::fix_segs();

	// Check for specific instructions and handle them separately.
	if (*raddr(Segs.val[1], cpu_regs.ip.word[0]) == 0xcd) // int x
	{
		// Execute int x instruction.
		log_debug("Inside single step cur cs:ip %x:%x executing int %x\n",
		          Segs.val[1], cpu_regs.ip.word[0],
		          *raddr(Segs.val[1], cpu_regs.ip.word[0] + 1));
		++cpu_regs.ip.word[0];
		_INT(*raddr(Segs.val[1], cpu_regs.ip.word[0]++));
		log_debug("Finished single step cur cs:ip %x:%x\n", Segs.val[1],
		          cpu_regs.ip.word[0]);
		return;
	} else if (*raddr(Segs.val[1], cpu_regs.ip.word[0]) == 0xcc) // int3
	{
		// Execute int 3 instruction.
		log_debug("Inside single step cur cs:ip %x:%x executing int 3\n",
		          Segs.val[1], cpu_regs.ip.word[0]);
		++cpu_regs.ip.word[0];
		_INT(3);
		log_debug("Finished single step cur cs:ip %x:%x\n", Segs.val[1],
		          cpu_regs.ip.word[0]);
		return;
	}

	// Reference the CPU registers.
	X86_REGREF

	// Store the old CPU cycle count and instruction pointer.
	old_cycles = CPU_Cycles;
	dd oldeip = (Segs.val[1] << 16) + cpu_regs.ip.word[0];
	dd neweip(oldeip);

	// Variable to store the return code from CPU_Core_Normal_Run().
	Bits nc_retcode;

	// Set the single-stepping flag and disable the shadow stack.
	doing_single_step = true;
	shadow_stack.disable();

	// Execute a single instruction using the DOSBox interpreter.
	try {
		// printf("~~s1 %x:%x\n",Segs.val[1],cpu_regs.ip.word[0]);
		do {
			CPU_Cycles = 1;
			nc_retcode = CPU_Core_Normal_Run();
			neweip = (Segs.val[1] << 16) + cpu_regs.ip.word[0];
		} while (neweip == oldeip); // Handle REP* instructions.
	} catch (...) {
		// Handle exceptions during interpretation.
		printf("~~!exception catched %x:%x\n", Segs.val[1],
		       cpu_regs.ip.word[0]);
		log_error("~~!exception catched %x:%x\n", Segs.val[1],
		          cpu_regs.ip.word[0]);
		shadow_stack.enable();
		doing_single_step = false;
		CPU_Cycles = old_cycles;

		compare_jump = false;
		throw;
	}

	// Re-enable the shadow stack and reset the single-stepping flag.
	shadow_stack.enable();
	doing_single_step = false;
	CPU_Cycles = old_cycles;
	// printf("~~s2 %x:%x\n",Segs.val[1],cpu_regs.ip.word[0]);
	// // log_debug ("CPU_Cycles=%d CPU_CycleLeft=%d\n", CPU_Cycles,
	// CPU_CycleLeft);
}

// Function to copy memory and perform comparison in debug mode.
void mycopy(db *d, db *s, size_t size, const char *name)
{
#if M2CDEBUG
	// Compare memory contents and print debug information if they differ.
	int res = memcmp(d, s, size);
	if (res) {
		printf("non-equal %s addr=%x size=%d", name,
		       d - ((db *)&m2c::m), size);
		void *p = memmem(((db *)&m2c::m) + 0x1920, COMPARE_SIZE, s, size);
		if (size > 3 && p) {
			printf(" found at %x", ((db *)p) - d);
		}
		printf("\nm2c ");
		hexDump(s, size);
		printf("memory ");
		hexDump(d, size);
        }
#else
	//      printf("Init %zx %zd\n", d - ((db*)&m), size);
	// Copy memory contents in non-debug mode.
	memcpy(d, s, size);
	//    memset (((db *) & types) + (d - ((db *) & m)), 0xff, size);
#endif
}


// Function to dump the stack and shadow memory.
void stackDump(_STATE *_state)
{
	// Ensure the function is called only once.
	static bool already = false;
	if (already)
		return;
	already = true;

	// Print collected traces, backtrace, and shadow stack.
	m2c::print_traces();
#ifndef _WIN32
	print_backtrace(0);
#endif
	shadow_stack.print(0);
}

// Function to log dosbox register values
void log_regs_dbx_direct(size_t counter_,
                         const char *file,
                         int line,
                         db indent,
                         const char *instr,
                         const CPU_Regs &r,
                         const Segments &s)
{
	/*
	enum SegNames { es=0,cs=1,ss=2,ds=3,fs=4,gs=5};
	struct Segments {
	        Bit16u val[8];
	};
	union GenReg32 {
	        Bit32u dword[1];
	};
	struct CPU_Regs {
	        GenReg32 regs[8],ip;
	        Bitu flags;
	        REGI_AX=0, REGI_CX=1, REGI_DX=2, REGI_BX=3,
	        REGI_SP=4, REGI_BP=5, REGI_SI=6, REGI_DI=7
	};
	#define reg_32(reg) (cpu_regs.regs[(reg)].dword[DW_INDEX])
	};*/
	//   if (trace_instructions)
	printf("%8x %s:%06d %04X:%04X %s%s%s AX:%04X BX:%04X CX:%04X DX:%04X SI:%04X DI:%04X BP:%04X SP:%04X DS:%04X ES:%04X FS:%04X GS:%04X SS:%04X CF:%x ZF:%x SF:%x OF:%x AF:%x PF:%x IF:%x\n",
	       counter_, file, line, s.val[1], r.ip, log_spaces(indent), instr,
	       log_spaces(84 - indent - strlen(instr)), r.regs[0].dword[0],
	       r.regs[3].dword[0], r.regs[1].dword[0], r.regs[2].dword[0],
	       r.regs[6].dword[0], r.regs[7].dword[0], r.regs[5].dword[0],
	       r.regs[4].dword[0], s.val[3], s.val[0], s.val[4], s.val[5],
	       s.val[2], (r.flags & FLAG_CF) != 0, (r.flags & FLAG_ZF) != 0,
	       (r.flags & FLAG_SF) != 0, (r.flags & FLAG_OF) != 0,
	       (r.flags & FLAG_AF) != 0, (r.flags & FLAG_PF) != 0,
	       (r.flags & FLAG_IF) != 0);
}

// Structure to store CPU state information for tracing.
struct CPU_State {
	/*
	                   CPU_State(size_t counter,
	                   const char *file,
	                   int line,
	                   db indent,
	                   const char* instr,
	                   CPU_Regs regs,
	                   Segments segs):
	                   counter(counter),
	                   file(file),
	                   line(line),
	                   indent(indent),
	                   instr(instr),
	                   regs(regs),
	                   segs(segs)
	                   {}*/
	size_t counter;
	const char *file;
	int line;
	db indent;
	std::string instr;
	CPU_Regs regs;
	Segments segs;
};

// Circular buffer to store CPU state traces.
CircularBuffer<CPU_State> trace_store(50000);

// Function to print collected CPU state traces.
static void print_traces()
{
	while (!trace_store.empty()) {
		CPU_State &cs = trace_store.front();
		log_regs_dbx_direct(cs.counter, cs.file, cs.line, cs.indent,
		                    cs.instr.c_str(), cs.regs, cs.segs);
		trace_store.pop_front();
	}
}

// Function to log register values and other debug information.
void log_regs_dbx(const char *file,
                  int line,
                  const char *instr,
                  const CPU_Regs &r,
                  const Segments &s)
{
	// Increment instruction counter.
	++counter;

	// Store CPU state information in the trace buffer if enabled.
	if (trace_instructions) {
		if (!trace_instructions_to_stdout) {
			CPU_State cs = {counter, file, line, _indent,
			                instr,   r,    s};
			trace_store.push_back(cs);
		} else {
			log_regs_dbx_direct(counter, file, line, _indent, instr,
			                    r, s);
		}
	}
}

// Function to get the size of an instruction in bytes.
size_t inst_size(dw cs, dd eip)
{
	char dline[120];
	return DasmI386(dline, (cs << 4) + eip, eip, false);
}

// Function to get the size of an instruction in bytes from a memory buffer.
size_t inst_size(db *b)
{
	size_t instr_size = 0;
	db op1 = *b;
	// printf("op1 %x\n", op1);

	// Handle instruction prefixes.
	switch (op1) {
	case 0x26:
	case 0x2E:
	case 0x36:
	case 0x3E:
	case 0x64:
	case 0x65:
	case 0x66:
	case 0x67:
	case 0xF0:
	case 0xF2:
	case 0xF3: {
		++b;
		++instr_size;
		op1 = *b;
		// printf("op1 %x\n", op1);
	}
	}

	// Determine instruction size based on opcode.
	if (op1 >= 0x70 && op1 <= 0x7f) // j
		instr_size += 2;
	else if (op1 == 0x9a) // callf
		instr_size += 5;
	else if (op1 == 0xc2) // retn n
		instr_size += 3;
	else if (op1 == 0xc3) // retn
		instr_size += 1;
	else if (op1 == 0xca) // retf n
		instr_size += 3;
	else if (op1 == 0xcb) // retf
		instr_size += 1;
	else if (op1 == 0xcf) // iret
		instr_size += 1;
	else if (op1 >= 0xe0 && op1 <= 0xe3) // loop
		instr_size += 2;
	else if (op1 == 0xe8 || op1 == 0xe9) // jmp
		instr_size += 3;
	else if (op1 == 0xea) // jmpf
		instr_size += 5;
	else if (op1 == 0xeb) // jmpf
		instr_size += 2;
	else if (op1 == 0xff) // jmpf
	{
		db op2 = *(b + 1);
		// printf("op2 %x\n", op2);
		if (op2 >= 0x10 && op2 <= 0x2f) // call/jmp
			instr_size += 4;
		else if (op2 >= 0x50 && op2 <= 0x6f) // call/jmp
			instr_size += 3;
		else if (op2 >= 0x90 && op2 <= 0xAf) // call/jmp
			instr_size += 4;
		else if (op2 >= 0xd0 && op2 <= 0xef) // call/jmp
			instr_size += 2;
	} else if (op1 == 0x0f) // j
	{
		db op2 = *(b + 1);
		if (op2 >= 0x80 && op2 <= 0x8f) // call/jmp r/m16
			instr_size += 4;
	}
	log_debug("instr size %x\n", instr_size);

	// Handle unknown instruction size.
	if (instr_size == 0) {
		X86_REGREF
		printf("Could not identify instruction size %x:%x %x\n", cs,
		       eip, op1);
		exit(1);
	}

	return instr_size;
}

// Function to process self-modifying instructions.
void process_self_mod(dw seg, dd ip, size_t size)
{
	// Print debug information about the self-modified instruction.
	printf("~self-modified instruction at %x:%x\n", seg, ip);
	::print_instruction_direct(seg, ip);
	cmpHexDump(m2c::lm + (seg << 4) + ip, (db *)&m2c::m + (seg << 4) + ip, size);

	// Collect run-time information about the self-modification.
	if (collect_rt_info) {
		memcpy(raddr(0xc000, 0xf000), m2c::lm + (seg << 4) + ip, size);
		char ins_old[120];
		DasmI386(ins_old, 0xcf000, 0xf000, false);
		char ins_new[120];
		DasmI386(ins_new, (seg << 4) + ip, ip, false);
		size_t equal_bytes = countEqual(m2c::lm + (seg << 4) + ip,
		                                (db *)&m2c::m + (seg << 4) + ip,
		                                size);
		shadow_memory.collect_selfmod(seg, ip, equal_bytes, size,
		                              ins_old, ins_new);
	}
}

// Buffer to store the name of the current jump instruction.
char jump_name[100] = "";

// Function to handle the start of a jump instruction.
bool Jstart(const char *file, int line, const char *instr)
{
	// End the previous jump comparison if needed.
	if (compare_jump)
		Jend();

	// Run hardware interrupts.
	run_hw_interrupts();

	// Log register values and debug information.
	log_regs_dbx(file, line, instr, cpu_regs, Segs);

	// Return early if instruction comparison is disabled.
	if (!compare_mode)
		return true;

	// Store the old instruction pointer.
	oldip = cpu_regs.ip.word[0];

	// Get the current instruction pointer and segment.
	dd ip1 = cpu_regs.ip.word[0];
	dw seg = Segs.val[1];

	// Check if the instruction should be compared.
	bool compare(compare_mode && !already_checked[(seg << 4) + ip1]);

	// Store the old CPU state.
	oldSegs = Segs;
	oldcpu_regs = cpu_regs;

	// Perform comparison if enabled.
	if (compare) {
		memcpy(om, &m, COMPARE_SIZE);
		strcpy(jump_name, instr);
		compare_jump = true;
	}

	// Execute a single step using the DOSBox interpreter.
	dbx_single_step();

	// Mark the instruction as checked.
	already_checked[(seg << 4) + ip1] = true;

	// Get the size of the instruction.
	size_t instr_size = inst_size(seg, ip1);

	// Check for self-modifying code.
	if (memcmp(m2c::lm + (seg << 4) + ip1,
	           ((db *)&m2c::m) + (seg << 4) + ip1, instr_size) != 0) {
		process_self_mod(seg, ip1, instr_size);
		compare_jump = false;
	} else {
		// Store the result from the DOSBox interpreter.
		dbx_result_segs = Segs;
		dbx_result_regs = cpu_regs;
		if (compare)
			memcpy(rm, &m, COMPARE_SIZE);
	}

	// Restore the old CPU state.
	Segs = oldSegs;
	cpu_regs = oldcpu_regs;

	// Restore memory if comparison was enabled.
	if (compare)
		memcpy(&m, om, COMPARE_SIZE);

	// Advance the instruction pointer for call instructions.
	cpu_regs.ip.word[0] += instr_size;

	return true;
}

// Function to handle the end of a jump instruction.
void Jend()
{
	// Return early if instruction comparison is disabled or not in a jump
	// comparison.
	if (!compare_mode || !compare_jump)
		return;

	// Get the current instruction string.
	const char *instr = jump_name;

	// Reset the jump comparison flag.
	compare_jump = false;

	// Fix segment registers.
	fix_segs();

	// Backup and mask CPU flags.
	Bitu bckpflags = cpu_regs.flags;
	dbx_result_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
	cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
	//    cpu_regs.ip = dbx_result_regs.ip;

	// Compare CPU state and memory contents with the DOSBox interpreter
	// results.
	if (memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs)) != 0 ||
	    memcmp(&Segs, &dbx_result_segs, sizeof(Segments)) != 0 ||
	    memcmp(&m, rm, COMPARE_SIZE) != 0) {
		// Dump stack and print error information if there are differences.
		stackDump();
		trace_instructions = true;
		bool regs_ch = memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs));
		bool segs_ch = memcmp(&Segs, &dbx_result_segs, sizeof(Segments));
		bool mem_ch = memcmp(&m, rm, COMPARE_SIZE);
		printf("/j-------------Error-during-jump-or-call-result-was-different-to-dosbox-interpreter-------------\\\n");
		printf("\nbefore instr ");
		log_regs_dbx_direct(0, "", 0, 0, instr, oldcpu_regs, oldSegs);
		//        cpu_regs.ip.word[0] = oldip;
		printf("dbx disas: ");
		::print_instruction_direct(oldSegs.val[1], oldip);
		hexDump(raddr(oldSegs.val[1], oldip), 8);

		printf("\n~m2c result ");
		log_regs_dbx_direct(0, "", 0, 0, instr, cpu_regs, Segs);

		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}

		Segs = dbx_result_segs;
		cpu_regs = dbx_result_regs;

		printf("\n~dbx res state ");
		log_regs_dbx_direct(0, "", 0, 0, instr, dbx_result_regs,
		                    dbx_result_segs);
		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}
		if (mem_ch) {
			printf("~memory diff m2c/dbx\n");
			cmpHexDump(&m, rm, COMPARE_SIZE);
		}
		printf("\\j-----------------------------Error-----------------------------------------/\n");
		exit(1);
	}

	// Restore CPU flags.
	cpu_regs.flags = bckpflags;
}

// Function to handle the start of a simple instruction.
bool Sstart(const char *file, int line, const char *instr)
{
	// End the previous jump comparison if needed.
	if (compare_jump)
		Jend();

	// Run hardware interrupts.
	run_hw_interrupts();

	// Log register values and debug information.
	log_regs_dbx(file, line, instr, cpu_regs, Segs);

	// Return early if instruction comparison is disabled.
	if (!compare_mode)
		return true;

	// Store the old instruction pointer.
	oldip = cpu_regs.ip.word[0];

	// Get the current instruction pointer and segment.
	dd ip1 = cpu_regs.ip.word[0];
	dw seg = Segs.val[1];

	// Check if the instruction should be compared.
	bool compare(compare_mode && !already_checked[(seg << 4) + ip1]);

	// Execute a single step using the DOSBox interpreter.
	dbx_single_step();

	// Return early if comparison is disabled
	if (!compare) {
		if (CPU_Cycles > 0)
			--CPU_Cycles;
		if (!complex_self_modifications)
			return false;
	}

	// Mark the instruction as checked.
	already_checked[(seg << 4) + ip1] = true;

	// Get the new instruction pointer and calculate instruction size.
	dd ip2 = cpu_regs.ip.word[0];
	size_t instr_size = ip2 - ip1;
	// printf("~ %x %x\n",ip1,ip2);

	// Check for self-modifying code.
	if (memcmp(m2c::lm + (seg << 4) + ip1,
	           ((db *)&m2c::m) + (seg << 4) + ip1, instr_size) != 0) {
		process_self_mod(seg, ip1, instr_size);
		return false;
	}

	return false;
}

// Function to handle the start of an instruction that only modifies flags.
bool Tstart(const char *file, int line, const char *instr)
{
	// End the previous jump comparison if needed.
	if (compare_jump)
		Jend();

	// Run hardware interrupts.
	run_hw_interrupts();

	// Log register values and debug information.
	log_regs_dbx(file, line, instr, cpu_regs, Segs);

	// Return early if instruction comparison is disabled.
	if (!compare_mode)
		return true;

	// Store the old instruction pointer.
	oldip = cpu_regs.ip.word[0];

	// Get the current instruction pointer and segment.
	dd ip1 = cpu_regs.ip.word[0];
	dw seg = Segs.val[1];

	// Check if the instruction should be compared.
	bool compare(compare_mode && !already_checked[(seg << 4) + ip1]);

	// Store the old CPU state if comparison is enabled.
	if (compare) {
		oldSegs = Segs;
		oldcpu_regs = cpu_regs;
	}

	// Execute a single step using the DOSBox interpreter.
	dbx_single_step();

	// Return early if comparison is disabled
	if (!compare) {
		if (CPU_Cycles > 0)
			--CPU_Cycles;
		if (!complex_self_modifications)
			return false;
	}

	// Mark the instruction as checked.
	already_checked[(seg << 4) + ip1] = true;

	// Get the new instruction pointer and calculate instruction size.
	dd ip2 = cpu_regs.ip.word[0];
	size_t instr_size = ip2 - ip1;

	// Check for self-modifying code.
	if (memcmp(m2c::lm + (seg << 4) + ip1,
	           ((db *)&m2c::m) + (seg << 4) + ip1, instr_size) != 0) {
		process_self_mod(seg, ip1, instr_size);
		return false;
	} else {
		// Store the result from the DOSBox interpreter if comparison is
		// enabled.
		if (compare) {
			dbx_result_flags = cpu_regs.flags;
			cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
			dbx_result_segs = Segs;
			dbx_result_regs = cpu_regs;
			Segs = oldSegs;
			cpu_regs = oldcpu_regs;
			return true;
		}
	}

	return false;
}

// Function to handle the end of an instruction that only modifies flags.
void Tend(const char *file, int line, const char *instr)
{
	// Return early if instruction comparison is disabled.
	if (!compare_mode)
		return;

	// Fix segment registers.
	fix_segs();

	// Mask CPU flags and set the instruction pointer.
	cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
	cpu_regs.ip = dbx_result_regs.ip;

	// Compare CPU state and segment registers with the DOSBox interpreter
	// results.
	if (memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs)) != 0 ||
	    memcmp(&Segs, &dbx_result_segs, sizeof(Segments)) != 0) {
		// Dump stack and print error information if there are differences.
		stackDump();
		trace_instructions = true;
		bool regs_ch = memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs));
		bool segs_ch = memcmp(&Segs, &dbx_result_segs, sizeof(Segments));
		printf("/t-----------------Error-results-of-instruction-was-different-within-regs-if-compare-with-dosbox-interpreter------\\\n");
		printf("\nbefore instr ");
		log_regs_dbx_direct(0, "", line, 0, instr, oldcpu_regs, oldSegs);
		//        cpu_regs.ip.word[0] = oldip;
		printf("dbx disas: ");
		::print_instruction_direct(oldSegs.val[1], oldip);
		hexDump(raddr(oldSegs.val[1], oldip), 8);

		printf("\n~m2c result ");
		log_regs_dbx_direct(0, file, line, 0, instr, cpu_regs, Segs);

		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}

		Segs = dbx_result_segs;
		cpu_regs = dbx_result_regs;

		printf("\n~dbx res state ");
		log_regs_dbx_direct(0, file, line, 0, instr, dbx_result_regs,
		                    dbx_result_segs);
		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}
		printf("\\t-----------------------------Error-----------------------------------------/\n");
		exit(1);
	}

	// Restore CPU flags.
	cpu_regs.flags = dbx_result_flags;
}

// Function to handle the start of an instruction that may modify memory or
// registers.
bool Xstart(const char *file, int line, const char *instr)
{
	// End the previous jump comparison if needed.
	if (compare_jump)
		Jend();

	// Run hardware interrupts.
	run_hw_interrupts();

	// Log register values and debug information.
	log_regs_dbx(file, line, instr, cpu_regs, Segs);

	// Return early if instruction comparison is disabled.
	if (!compare_mode)
		return true;

	// Store the old instruction pointer.
	oldip = cpu_regs.ip.word[0];

	// Get the current instruction pointer and segment.
	dd ip1 = cpu_regs.ip.word[0];
	dw seg = Segs.val[1];

	// Check if the instruction should be compared.
	bool already = !already_checked[(seg << 4) + ip1];
	bool compare(compare_mode && !already);

	// Store the old CPU state and memory contents if comparison is enabled.
	if (compare) {
		oldSegs = Segs;
		oldcpu_regs = cpu_regs;
		memcpy(om, &m, COMPARE_SIZE);
	}

	if (already)
		shadow_stack.forceenable(); // So if instruction was already
		                            // compare then make .push/.pop
		                            // execute anyway
	dbx_single_step();
	if (already)
		shadow_stack.forcedisable();

	// Return early if comparison is disabled
	if (!compare) {
		if (CPU_Cycles > 0)
			--CPU_Cycles;
		if (!complex_self_modifications)
			return false;
	}

	// Mark the instruction as checked.
	already_checked[(seg << 4) + ip1] = true;

	// Get the new instruction pointer and calculate instruction size.
	dd ip2 = cpu_regs.ip.word[0];
	size_t instr_size = ip2 - ip1;

	// Check for self-modifying code.
	if (memcmp(m2c::lm + (seg << 4) + ip1,
	           ((db *)&m2c::m) + (seg << 4) + ip1, instr_size) != 0) {
		process_self_mod(seg, ip1, instr_size);
		return false;
	} else {
		// Store the result from the DOSBox interpreter if comparison is
		// enabled.
		if (compare) {
			dbx_result_flags = cpu_regs.flags;
			cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
			dbx_result_segs = Segs;
			dbx_result_regs = cpu_regs;
			memcpy(rm, &m, COMPARE_SIZE);

			Segs = oldSegs;
			cpu_regs = oldcpu_regs;
			memcpy(&m, om, COMPARE_SIZE);
			return true;
		}
	}

	return false;
}

// Function to handle the end of an instruction that may modify memory or
// registers.
void Xend(const char *file, int line, const char *instr)
{
	// Return early if instruction comparison is disabled.
	if (!compare_mode)
		return;

	// Fix segment registers.
	fix_segs();

	// Mask CPU flags and set the instruction pointer.
	cpu_regs.flags &= FLAG_CF | FLAG_SF | FLAG_ZF | FLAG_OF;
	cpu_regs.ip = dbx_result_regs.ip;

	// Compare CPU state, segment registers, and memory contents with the
	// DOSBox interpreter results.
	if (memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs)) != 0 ||
	    memcmp(&Segs, &dbx_result_segs, sizeof(Segments)) != 0 ||
	    memcmp(&m, rm, COMPARE_SIZE) != 0) {
		// Dump stack and print error information if there are differences.
		stackDump();
		trace_instructions = true;
		bool regs_ch = memcmp(&cpu_regs, &dbx_result_regs, sizeof(CPU_Regs));
		bool segs_ch = memcmp(&Segs, &dbx_result_segs, sizeof(Segments));
		bool mem_ch = memcmp(&m, rm, COMPARE_SIZE);
		printf("/x------Error-results-of-instruction-was-different-within-regs--or-memory-if-compare-with-dosbox-interpreter------\\\n");
		printf("\nbefore instr ");
		log_regs_dbx_direct(0, "", line, 0, instr, oldcpu_regs, oldSegs);
		//        cpu_regs.ip.word[0] = oldip;
		printf("dbx disas: ");
		::print_instruction_direct(oldSegs.val[1], oldip);
		hexDump(raddr(oldSegs.val[1], oldip), 8);

		printf("\n~m2c res state ");
		log_regs_dbx_direct(0, file, line, 0, instr, cpu_regs, Segs);
		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}

		Segs = dbx_result_segs;
		cpu_regs = dbx_result_regs;
		printf("\n~dbx res state ");
		log_regs_dbx_direct(0, file, line, 0, instr, dbx_result_regs,
		                    dbx_result_segs);
		if (regs_ch) {
			printf("reg ");
			hexDump(&cpu_regs, sizeof(CPU_Regs));
		}
		if (segs_ch) {
			printf("seg ");
			hexDump(&Segs, sizeof(Segments));
		}
		if (mem_ch) {
			printf("~memory diff m2c/dbx\n");
			cmpHexDump(&m, rm, COMPARE_SIZE);
		}
		printf("\\x-----------------------------Error-----------------------------------------/\n");
		exit(1);
	}

	// Restore CPU flags.
	cpu_regs.flags = dbx_result_flags;
}

// Function to interpret an unknown callf instruction.
void interpret_unknown_callf(dw newcs, dd newip, db source)
{
	// Reference the CPU registers.
	X86_REGREF

	// Handle recursive calls from the interpreter.
	if (cs == newcs && newip == eip) {
		printf("Called from interpreter. return1");
		return; // Most probably a call of interpreter int from interpreter
	}

	// Set the code segment and instruction pointer.
	cs = newcs;
	eip = newip;

	// Handle calls from the interpreter.
	if (from_interpreter) {
		from_interpreter = false;
		printf("Called from interpreter. return2");
		return;
	}

	// Reset the jump comparison flag.
	compare_jump = false;

	// Store the old stack pointer, fix segment registers, and push the
	// return point onto the stack.
	dw oldsp = sp;
	fix_segs();
	return_point.push(*(dd *)raddr(ss, sp));
	/*
	if (debug > 0)
	    printf ("Enter interp current cs=%x ip=%x sp=%x ret_point:%x
	retp.size()=%d\n", cs, ip, sp, return_point.top (), return_point.size
	());
	*/
	// Execute instructions until the return point is reached.
	do {
		//  log_debug("start\n");
		Normal_Loop();
		//  log_debug("stop\n");
	} while (return_point.top() != (cs << 16) + ip);

	// Handle mismatched return points.
	if (return_point.top() != (cs << 16) + ip) {
		log_error("Error cs:ip != return_point %x\n", return_point.top());
	}
	/*
	if (debug > 0)
	    printf ("Exit interp cs=%x ip=%x sp=%x\n", cs, ip, sp);
	*/
	// Handle stack pointer inconsistencies.
	if (oldsp + 4 != sp && cs != 0xf000) {
		log_error("Error it should consume 4 bytes from stack\n");
		// callf to bios consumes 0 bytes
		// stackDump ();
		//        exit (1);
	}

	// Pop the return point from the stack.
	return_point.pop();
}

// Function to log debug information with register values.
int log_debug(const char *format, ...)
{
	int result;
	va_list args;

	va_start(args, format);
	char str[256];
	result = vsprintf(str, format, args);
	//        result = vprintf(format, args);
	log_regs_dbx("", 0, str, cpu_regs, Segs);
	va_end(args);

	return result;
}

using json = nlohmann::json;
void ShadowMemory::collect_segs()
{
	// Reference the CPU registers.
	X86_REGREF

	// Collect segment register values for code addresses within a specific
	// range.
	if (cs >= 0x192 && cs < 0xa000) {
		dd target = (cs << 4) + eip;
		if (m_code.find(target) == m_code.end())
			m_code[target] = std::make_shared<Code>();
		Code &c(*static_cast<Code *>(m_code.find(target)->second.get()));
		c.m_segs[(size_t)Byte::SegNames::cs].insert(cs);
		c.m_segs[(size_t)Byte::SegNames::es].insert(es);
		c.m_segs[(size_t)Byte::SegNames::ss].insert(ss);
		c.m_segs[(size_t)Byte::SegNames::ds].insert(ds);
		if (fs)
			c.m_segs[(size_t)Byte::SegNames::fs].insert(fs);
		if (gs)
			c.m_segs[(size_t)Byte::SegNames::gs].insert(gs);
	}
}

// Function to collect information about self-modifying instructions.
void ShadowMemory::collect_selfmod(dw seg,
                                   dd ip,
                                   size_t modsize,
                                   size_t size,
                                   const char *insold,
                                   const char *insnew)
{
	// Collect information about self-modifications within a specific code
	// segment range.
	if (seg >= 0x192 && seg < 0xa000) {
		dd target = (seg << 4) + ip;
		bool created = false;
		if (m_code.find(target) == m_code.end()) {
			m_code[target] = std::make_shared<Code>();
			created = true;
		}
		Code &c(*static_cast<Code *>(m_code.find(target)->second.get()));
		c.m_selfmodified = true;
		c.size = size;
		c.m_modsize = modsize;
		c.m_selfvariants.insert(insold);
		c.m_selfvariants.insert(insnew);
	}
}

// Function to collect information about cross-segment jumps.
void ShadowMemory::collect_cross_jumps(dw newcs, dd newip)
{
	// Reference the CPU registers.
	X86_REGREF

	// Collect jump targets within a specific code segment range.
	if (newcs >= 0x192 && newcs < 0xa000) {
		dd target = (newcs << 4) + newip;
		m_jumps.insert(target);
	}
}

// Function to collect information about data accesses.
void ShadowMemory::collect_data(dd b, size_t size)
{
	// Reference the CPU registers.
	X86_REGREF

	// Collect data access information within a specific memory range.
	dd target = b;
	if (target >= 0x1920 && target < 0xa0000) {
		if (m_data.find(target) == m_data.end())
			m_data[target] = std::make_shared<Data>();
		Data &d(*static_cast<Data *>(m_data.find(target)->second.get()));
		d.sizes.insert(size);
	}

	// Collect data access information for code addresses within a specific
	// range.
	if (cs >= 0x192 && cs < 0xa000) {
		dd csip = (cs << 4) + eip;
		if (m_code.find(csip) == m_code.end())
			m_code[csip] = std::make_shared<Code>();
		Code &c(*static_cast<Code *>(m_code.find(csip)->second.get()));
		c.m_video = isaddrbelongtovga(b);
		c.accessingdata.insert(target);
	}
}

// Function to dump the collected run-time information to a JSON file.
void ShadowMemory::dump()
{
	if (!collect_rt_info || m_code.empty())
	     return;

	// Mark data addresses accessed multiple times as arrays.
	for (auto &[key, value] : m_code) {
		const Byte *b = value.get();
		const Code *c = static_cast<const Code *>(b);
		if (c->accessingdata.size() > 1) {
			for (auto &i : c->accessingdata) {
				try {
					m_data.at(i)->m_array = true;
				} catch (...) {
				}
			}
		}
	}

	// Serialize the run-time information to JSON.
	json j;
	j = *this;
	std::string s = j.dump();

	// Write the JSON data to a file.
	std::string json_file_name = exename + ".json";
	printf("Dumping run-time info into %s\n", json_file_name.c_str());
	FILE *f = fopen(json_file_name.c_str(), "w");
	fwrite(s.c_str(), s.size(), 1, f);
	fclose(f);
	printf("Saved json\n");

        m_data.clear();
        m_code.clear();
        m_jumps.clear();
	//       printf("%s\n",j.dump(3).c_str());
}

// JSON serialization function for the Code structure.
void to_json(nlohmann::json &nlohmann_json_j, const Code &c)
{
	nlohmann_json_j["es"] = c.m_segs[(size_t)Byte::SegNames::es];
	nlohmann_json_j["cs"] = c.m_segs[(size_t)Byte::SegNames::cs];
	nlohmann_json_j["ss"] = c.m_segs[(size_t)Byte::SegNames::ss];
	nlohmann_json_j["ds"] = c.m_segs[(size_t)Byte::SegNames::ds];
	nlohmann_json_j["fs"] = c.m_segs[(size_t)Byte::SegNames::fs];
	//        if (!c.m_segs[(size_t)Byte::SegNames::gs].empty())
	nlohmann_json_j["gs"] = c.m_segs[(size_t)Byte::SegNames::gs];

	//        if (c.m_video)
	nlohmann_json_j["Video"] = c.m_video;
	//        if (c.m_selfmodified)
	nlohmann_json_j["Self"] = c.m_selfmodified;
	nlohmann_json_j["SelfVar"] = c.m_selfvariants;
	//        if (c.size)
	nlohmann_json_j["Size"] = c.size;
	//        if (c.m_modsize)
	nlohmann_json_j["Modsize"] = c.m_modsize;
	//        nlohmann_json_j["Accdat"] = c.accessingdata;
}

// JSON serialization function for the Data structure.
void to_json(nlohmann::json &nlohmann_json_j, const Data &nlohmann_json_t)
{
	nlohmann_json_j["Sizes"] = nlohmann_json_t.sizes;
	//	if (nlohmann_json_t.m_array)
	nlohmann_json_j["Array"] = nlohmann_json_t.m_array;
}

// Function to convert an integer to a hexadecimal string.
template <typename T>
std::string int_to_hex(T i)
{
	std::stringstream stream;
	stream << "0x"
	       //         << std::setfill ('0') << std::setw(sizeof(T)*2)
	       << std::hex << i;
	return stream.str();
}

// JSON serialization function for the ShadowMemory class.
void to_json(nlohmann::json &nlohmann_json_j, const ShadowMemory &nlohmann_json_t)
{
	for (auto &[key, value] : nlohmann_json_t.m_code) {
		const Byte *b = value.get();
		const Code *c = static_cast<const Code *>(b);
		nlohmann_json_j["Code"][int_to_hex(key)] = *c;
	}
	for (auto &[key, value] : nlohmann_json_t.m_data) {
		const Byte *b = value.get();
		const Data *d = static_cast<const Data *>(b);
		nlohmann_json_j["Data"][int_to_hex(key)] = *d;
	}
	nlohmann_json_j["Jumps"] = nlohmann_json_t.m_jumps;
}

} // namespace m2c

// Function to initialize the entry point for translated code.
void init_entrypoint(Bit16u relocate)
{
	// Reference the CPU registers.
	X86_REGREF

	// Print debug information.
	printf("Starting m2c\n");
	printf("\n\nCS:IP 0x%x:0x%x\tMemBase: %p\n", cs, eip, MemBase);

	//   memset(((db*)&m2c::m)+0x1920+0x100,0,0xfef0);
	// Initialize masm2c.
	m2c::Initializer();

	// Load masm2c drivers.
	m2c::load_drivers();

	// Backup memory after program loading.
	memcpy(m2c::lm, &m2c::m, COMPARE_SIZE);
	/*
	FILE* file_to_write = 0;
	if((file_to_write = fopen("goody.com", "wb")) != 0){

	fwrite(((db*)&m2c::m)+0x1920+0x100, 0xff00, 1, file_to_write);
	fclose(file_to_write);
}
*/

	// Create a new masm2c state and call the entry point.
	m2c::_STATE _state;
	(*m2c::_ENTRY_POINT_)(0, &_state);
}