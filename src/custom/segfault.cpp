
/*  !!!!! SHOULD BE COMPILED WITH
    EXTRA_LDFLAGS = $(OPTION_$(SYSTEM))
    OPTION_linuxos = -rdynamic
    and add me to EXTRA_SRCS list
           TO HAVE NAMES and LINE NUMBERS PRINTED */

#include <memory>
#include <stdint.h>
#include <cstdlib>
#include <signal.h>
#include <cstdio>

#if (defined(__gnu_linux__))
#include <execinfo.h>
#include <cxxabi.h>
#endif

#ifndef _GNU_SOURCE
#define _GNU_SOURCE /* See feature_test_macros(7) */
#endif
#include <pthread.h>

#include <dlfcn.h>
#ifndef RTLD_DEFAULT
#define RTLD_DEFAULT NULL
#endif

/* get REG_EIP / REG_RIP from ucontext.h */
#include <ucontext.h>
#include <unistd.h>
#include <cstring>
#include <iostream>

#if (defined(__x86_64__))
#ifndef REG_RIP
#define REG_RIP REG_INDEX(rip) /* seems to be 16 */
#endif
#endif

#include <sys/types.h>
#if __GLIBC__ == 2 && __GLIBC_MINOR__ < 30
#include <sys/syscall.h>
#define gettid() syscall(SYS_gettid)
#endif

// namespace { // Prevent polluting namespace

class SignalHandler {
public:
	SignalHandler();
	static void *m_reserve_p;

#ifdef __hpux
	static FILE *m_stackFile_p;
#endif
};

int (*dynamic_pthread_setname_np)(pthread_t thread, const char *name);

void *SignalHandler::m_reserve_p = 0;

SignalHandler signalHandler;

void install_handlers();

SignalHandler::SignalHandler()
{
	install_handlers();
}

/* This file defines macros to access the content of the sigcontext element
   passed up by the signal handler.  */
// #include <sigcontextinfo.h>

/* We'll use this a lot.  */
#define WRITE_WORD(s) \
	{ \
		std::cerr << s; \
	}
#define WRITE_STRING(ss) \
	{ \
		WRITE_WORD(ss); \
		WRITE_WORD(std::endl); \
	}

/* We better should not use `strerror' since it can call far too many
   other functions which might fail.  Do it here ourselves.  */
static void write_strsignal(int signal)
{
	// #if (defined (__gnu_linux__))
	// if (signal < 0 || signal >= _NSIG || _sys_siglist[signal] == NULL)
	// #endif

	{
		switch (signal) {
		case SIGHUP: WRITE_WORD("SIGHUP"); break;
		case SIGINT: WRITE_WORD("SIGINT"); break;
		case SIGQUIT: WRITE_WORD("SIGQUIT"); break;
		case SIGILL: WRITE_WORD("SIGILL"); break;
		case SIGTRAP: WRITE_WORD("SIGTRAP"); break;
		case SIGABRT: WRITE_WORD("SIGABRT"); break;
		case SIGFPE: WRITE_WORD("SIGFPE"); break;
		case SIGKILL: WRITE_WORD("SIGKILL"); break;
		case SIGBUS: WRITE_WORD("SIGBUS"); break;
		case SIGSEGV: WRITE_WORD("SIGSEGV"); break;
		case SIGSYS: WRITE_WORD("SIGSYS"); break;
		case SIGPIPE: WRITE_WORD("SIGPIPE"); break;
		case SIGALRM: WRITE_WORD("SIGALRM"); break;
		case SIGTERM: WRITE_WORD("SIGTERM"); break;
		case SIGUSR1: WRITE_WORD("SIGUSR1"); break;
		case SIGUSR2: WRITE_WORD("SIGUSR2"); break;
		case SIGCHLD: WRITE_WORD("SIGCHLD"); break;
		case SIGPWR: WRITE_WORD("SIGPWR"); break;
		case SIGVTALRM: WRITE_WORD("SIGVTALRM"); break;
		case SIGPROF: WRITE_WORD("SIGPROF"); break;
		case SIGIO: WRITE_WORD("SIGIO"); break;
		case SIGWINCH: WRITE_WORD("SIGWINCH"); break;
		case SIGSTOP: WRITE_WORD("SIGSTOP"); break;
		case SIGTSTP: WRITE_WORD("SIGTSTP"); break;
		case SIGCONT: WRITE_WORD("SIGCONT"); break;
		case SIGTTIN: WRITE_WORD("SIGTTIN"); break;
		case SIGTTOU: WRITE_WORD("SIGTTOU"); break;
		case SIGURG: WRITE_WORD("SIGURG"); break;
		case SIGXCPU: WRITE_WORD("SIGXCPU"); break;
		case SIGXFSZ: WRITE_WORD("SIGXFSZ"); break;
		default: WRITE_WORD(signal);
		}
	}

	// #if (defined (__gnu_linux__))
	// else
	// WRITE_WORD(_sys_siglist[signal]);
	// #endif
}

static const char *decode_si_code(int sig, int si_code)
{
	const char *str = "";

	switch (sig) {
	case SIGILL:
		// # ifdef ILL_ILLOPC
		switch (si_code) {
		case ILL_ILLOPC: str = "Illegal opcode"; break;
		case ILL_ILLOPN: str = "Illegal operand"; break;
		case ILL_ILLADR: str = "Illegal addressing mode"; break;
		case ILL_ILLTRP: str = "Illegal trap"; break;
		case ILL_PRVOPC: str = "Privileged opcode"; break;
		case ILL_PRVREG: str = "Privileged register"; break;
		case ILL_COPROC: str = "Copressesor error"; break;
		case ILL_BADSTK: str = "Internal stack error"; break;
		}
		// # endif
		break;
	case SIGFPE:
		// # ifdef FPE_INTDIV
		switch (si_code) {
		case FPE_INTDIV: str = "Integer divide by zero"; break;
		case FPE_INTOVF: str = "Integer overflow"; break;
		case FPE_FLTDIV: str = "Floating point divide by zero"; break;
		case FPE_FLTOVF: str = "Floating point overflow"; break;
		case FPE_FLTUND: str = "Floating point underflow"; break;
		case FPE_FLTRES: str = "Floating point inexact result"; break;
		case FPE_FLTINV:
			str = "Floating point invalid operation";
			break;
		case FPE_FLTSUB: str = "Subscript out of range"; break;
		}
		// # endif
		break;
	case SIGSEGV:
		// # ifdef SEGV_MAPERR
		switch (si_code) {
		case SEGV_MAPERR: str = "Address not mapped"; break;
		case SEGV_ACCERR: str = "Access to protected region"; break;
		}
		// # endif
		break;

	case SIGBUS:
		// # ifdef BUS_ADRALN
		switch (si_code) {
		case BUS_ADRALN: str = "Invalid address alignment"; break;
		case BUS_ADRERR: str = "Non-existant physical address"; break;
		case BUS_OBJERR: str = "Object specific hardware error"; break;
		}
		// # endif
		break;
	}

	switch (si_code) {
	case SI_USER: str = "kill or raise"; break;
#if (defined(__gnu_linux__))
	case SI_KERNEL: str = "Sent by the kernel."; break;
#endif
	case SI_QUEUE: str = "sigqueue"; break;
	case SI_TIMER: str = "POSIX timer expired"; break;
	case SI_MESGQ:
		str = "POSIX message queue state changed; see mq_notify";

		break;
	case SI_ASYNCIO: str = "AIO completed"; break;
#if (defined(__gnu_linux__))
	case SI_SIGIO: str = "queued SIGIO"; break;
	case SI_TKILL: str = "tkill or tgkill"; break;
#endif
	}
	return str;
}

void print_backtrace(uintptr_t pc)
{
#if (defined(__gnu_linux__))
	WRITE_STRING("(LWP " << gettid()
	                     << ") ************ Real stack dump ************");

	void *array[256];
	int size = 0;

	if (pc == (uintptr_t)0 || pc > (uintptr_t)0x1000) // protection from some
	                                                  // ugly cases when
	                                                  // backtrace crashing
		size = backtrace(array, 256);

	//        array[1] = pc;
	if (size) {
		int j = 0;
		for (j = 0; j < size && pc; ++j)
			if ((uintptr_t)array[j] >= pc - 16 &&
			    (uintptr_t)array[j] <= pc + 16)
				break;

		// If we haven't found it, better dump full backtrace even
		// including
		//   the signal handler frames instead of not dumping anything.
		if (j == size)
			j = 0;

		char **messages = backtrace_symbols(array + j, size - j);

		// skip first stack frame (points here)
		for (int i = 0; i < size - j && messages != NULL; ++i) {
			char *mangled_name = 0, *offset_begin = 0, *offset_end = 0;

			// find parantheses and +address offset surrounding
			// mangled name
			for (char *p = messages[i]; *p; ++p) {
				if (*p == '(') {
					mangled_name = p;
				} else if (*p == '+') {
					offset_begin = p;
				} else if (*p == ')') {
					offset_end = p;
					break;
				}
			}

			// if the line could be processed, attempt to demangle
			// the symbol
			if (mangled_name && offset_begin && offset_end &&
			    mangled_name < offset_begin) {
				*mangled_name++ = '\0';
				*offset_begin++ = '\0';
				*offset_end++ = '\0';

				int status;
				char *real_name = abi::__cxa_demangle(mangled_name,
				                                      0, 0, &status);

				// if demangling is successful, output the
				// demangled function name
				if (status == 0) {
					WRITE_STRING(" ("
					             << i << ") " << messages[i]
					             << " : " << real_name << "+"
					             << offset_begin << offset_end);

				}
				// otherwise, output the mangled function name
				else {
					WRITE_STRING(" ("
					             << i << ") " << messages[i]
					             << " : " << mangled_name << "+"
					             << offset_begin << offset_end);
				}
				free(real_name);
			}
			// otherwise, print the whole line
			else {
				WRITE_STRING(" (" << i << ") " << messages[i]);
			}
		}

		free(messages);
	}
#elif (defined(__hpux))
	WRITE_STRING("************ BACKTRACE ************"); // stack overflow
	                                                     // is not properly
	                                                     // handled on HP-UX
	// if (SignalHandler::m_stackFile_p && SignalHandler::buffer)
	if (SignalHandler::m_stackFile_p) {
		_UNW_STACK_TRACE(SignalHandler::m_stackFile_p);
		long s = ftell(SignalHandler::m_stackFile_p);
		// WRITE_STRING( "size" << s <<endl;
		if (s) {
			{
				const int bt_size = 10000;
				fseek(SignalHandler::m_stackFile_p, 0, 0);
				char buffer[bt_size];
				if (s >= bt_size)
					s = bt_size - 1;
				*buffer = '\0';
				if (s == fread(buffer, 1, s,
				               SignalHandler::m_stackFile_p)) {
					buffer[s] = '\0';
					WRITE_WORD(buffer);
				}
			}
		}
	} else {
		WRITE_STRING("file is zero");
	}

#else
#error "Unknown architecture"
#endif
}

//! Try to properly terminate module
void stop_module()
{
	static bool done = false;
	{
		if (!done) {
			done = true;
		}
	}
}

void free_reserved() // Free up some space to work
{
	if (SignalHandler::m_reserve_p) {
		free(SignalHandler::m_reserve_p);
		SignalHandler::m_reserve_p = 0;
	}
}
extern "C" {

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
//! Catch number of OS signals
static void signal_handler(int signal, siginfo_t *info, void *ucontext)
{
	pthread_mutex_lock(&lock); // stop other threads to enter here

	free_reserved();

	WRITE_WORD("\n");

	WRITE_STRING("************ SIGNALED *************");
	WRITE_WORD("signal " << signal << " (");
	write_strsignal(signal);
	WRITE_WORD(") ");

	if (info) {
		WRITE_WORD("si_code=" << info->si_code << " ("
		                      << decode_si_code(signal, info->si_code)
		                      << ")");

		if (signal == SIGILL || signal == SIGFPE || signal == SIGSEGV ||
		    signal == SIGBUS) {
			WRITE_WORD(", address is [" << std::hex << info->si_addr
			                            << "]");
		}
	}
	WRITE_WORD("\n");

	ucontext_t *uc = (ucontext_t *)ucontext;
	uintptr_t pc = 0;
#if (defined(__x86_64__))
	if (uc)
		pc = ((uintptr_t)(void *)(uc)->uc_mcontext.gregs[REG_RIP]); // x86_64 specific

	if (pc) {
		WRITE_STRING(" from [" << std::hex << pc << "]"
		                       << " (use addr2line to get line numbers) ");
	}
#endif

	if (!(signal == SIGTERM && info && info->si_code == SI_USER)) // if not
	                                                              // user
	                                                              // executed
	                                                              // kill <PID>
	{
		print_backtrace(pc);
	}

	WRITE_WORD("\n");
	WRITE_STRING("***********************************");

	if (signal == SIGTERM) {
		stop_module();
	}

	/* Pass on the signal (so that a core file is produced).  */
	struct sigaction sa;
	sa.sa_handler = SIG_DFL;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sigaction(signal, &sa, NULL);
	raise(signal);
}

void exception_handler()
{
	free_reserved();

	WRITE_STRING("************ EXCEPTION ************");
	print_backtrace(0);

	struct sigaction sa;
	sa.sa_handler = SIG_DFL;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sigaction(SIGABRT, &sa, NULL);

	abort();
}

void oom_handler()
{
	free_reserved();

	WRITE_STRING("************ Out Of Memory during new() ************");
	print_backtrace(0);
	/*
	    struct sigaction sa;
	    sa.sa_handler = SIG_DFL;
	    sigemptyset (&sa.sa_mask);
	    sa.sa_flags = 0;
	    sigaction (SIGABRT, &sa, NULL);
	*/
	//    throw std::bad_alloc();
	stop_module();
}

void ftatexit()
{
	free_reserved();

	WRITE_STRING("\nProcess self stopped");
}

} // extern C

void install_handlers()
{
	SignalHandler::m_reserve_p = malloc(1024 * 1024); // Reserve 1M heap
	                                                  // memory to be able
	                                                  // to free and reuse
	                                                  // later in case of
	                                                  // problems

	//    WRITE_STRING( "Compiled on " << __DATE__ << " " << __TIME__) <<
	//    "Installing signal handlers");
	atexit(ftatexit);

	struct sigaction sa;

	sa.sa_sigaction = signal_handler;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_RESTART | SA_SIGINFO;
	/*
	    // use alternative stack
	    void *stack_mem = malloc (2 * SIGSTKSZ);  // Reserve some stack to
	resuse in signal handler #if (defined (__gnu_linux__)) stack_t ss; #else
	#error "Unknown architecture"
	#endif

	    if (stack_mem != NULL)
	    {
	        ss.ss_sp = stack_mem;
	        ss.ss_flags = 0;
	        ss.ss_size = 2 * SIGSTKSZ;

	        if (sigaltstack (&ss, NULL) == 0)
	            sa.sa_flags |= SA_ONSTACK;
	    }
	*/

#ifdef __hpux
	SignalHandler::m_stackFile_p = tmpfile(); // Reserve temp file to store
	                                          // stack data on HP-UX
	//    SignalHandler::buffer=malloc(10240);
#endif

	//  RHEL OS out of memory SIGKILL cannot be cautched
	//  Process memory limit will be cautched as malloc zero return or
	//  bad_alloc exception

	sigaction(SIGABRT, &sa, NULL);
	//  Segmentation fault
	sigaction(SIGSEGV, &sa, NULL);
	sigaction(SIGBUS, &sa, NULL);
	sigaction(SIGILL, &sa, NULL);
	sigaction(SIGFPE, &sa, NULL);
	sigaction(SIGPIPE, &sa, NULL);
#ifdef SIGSTKFLT
	sigaction(SIGSTKFLT, &sa, NULL);
#endif
	//  Usually user termination using "kill <PID>"
	sigaction(SIGTERM, &sa, NULL);
	// sigaction( SIGINT, &sa, NULL ); // For ctrl-c

	std::set_new_handler(oom_handler); // called if out of memory during new
	                                   // (does not catch malloc)
	std::set_terminate(exception_handler); // these are not realy used

	// std::set_unexpected is deprecated/removed in modern C++; terminate
	// handler above covers unexpected exceptions as well.
	*(void **)(&dynamic_pthread_setname_np) =
	        dlsym(RTLD_DEFAULT, "pthread_setname_np"); // if not found dlsym
	                                                   // then add -ldl
	                                                   // library to
	                                                   // EXTRA_LDFLAGS
}

//} // namespace

/*
int main()
{
show_backtrace();
FILE* m_stackFile_p=tmpfile();
void* buffer=malloc(10240);
if (m_stackFile_p && buffer)
{
    _UNW_STACK_TRACE(f);
    long s=ftell(m_stackFile_p);
    if (s)
    {
            {
            fseek(m_stackFile_p,0,0);
            if (s==fread(buffer,s,1,m_stackFile_p))
                printf("%s",(const char *)buffer);
            }
    }
return(0);

}

// !!!!!! Tests
//int infinite(int a) // stack overflow
//{ return(infinite(a+1)); }

//infinite(0);

  while(true)  // out of memory
    {
     char *a = (char *)malloc(16);
    *a=1;
    *(a+15)=2;

         }

int* a=0;
 *a=1; seg fault

*/
void set_thread_name(std::string name)
{
	// #ifdef HAVE_PTHREAD_SETNAME_NP_GNU_SOURCE
	if (dynamic_pthread_setname_np) {
		//	std::string name(s);
		if (name.size() > 15)
			name.erase(2, name.size() - 15);
		dynamic_pthread_setname_np(pthread_self(), name.c_str());
	}
	// #endif
}
