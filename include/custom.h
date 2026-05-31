#ifndef DOSBOX_CUSTOM_H
#define DOSBOX_CUSTOM_H

#include "dosbox.h"
#include <stack>
#include <vector>

typedef uint16_t dw;
typedef uint32_t dd;

extern bool collect_rt_info;
extern bool collect_rt_info_vars;
extern bool compare_mode;
extern uint32_t last_ip;
extern int custom_runs;

#include <unordered_set>
#include <unordered_map>
#include <memory>
#if __has_include(<json.hpp>)
#include <json.hpp>
#elif __has_include(<nlohmann/json.hpp>)
#include <nlohmann/json.hpp>
#else
#error "Missing nlohmann JSON header (json.hpp or nlohmann/json.hpp)"
#endif

namespace m2c {
enum class FlowKind : uint8_t {
	Jump = 0,
	Call = 1,
	Ret = 2,
	Jcc = 3,
	Other = 4,
};

extern std::string exename;

extern void Jend();

    extern int log_debug(const char *format, ...);

struct _STATE;
    class ShadowStack {
        struct Frame {
            bool init=false;
            const char *file;
            size_t line;
            dd sp;
            dw cs;
            dd ip;
            dd value;
            dw *pointer_;
            size_t addcounter;
            size_t remcounter;
            bool itwascall;
            size_t call_deep;
        };

        std::vector<Frame> m_ss;
        size_t m_current=0;
        bool m_itiscall=false;
        bool m_itisret=false;
        size_t m_deep=1;
    public:
        ShadowStack() : m_ss(0x10000)
        {}

        int m_needtoskipcall=0;
        bool m_active=true;
        bool m_forceactive=false;

        size_t m_currentdeep=0;

        void enable() {m_active=true;}
        void disable() {m_active=false;}
        void forceenable() {m_forceactive=true;}
        void forcedisable() {m_forceactive=false;}

        void push(_STATE *_state, dd value);

        void pop(_STATE *_state, size_t word_size);

        void print(_STATE *_state);
        void print_frame(const Frame& f);

        void itiscall() {m_itiscall=true;}
        void itisret() {m_itisret=true;}
        bool itwascall();

        void decreasedeep();
        bool needtoskipcalls();
        size_t getneedtoskipcallndclean(){int ret = m_needtoskipcall; m_needtoskipcall = 0; return ret;}
        void noneedreturn(){--m_needtoskipcall;}
    };

    extern ShadowStack shadow_stack;

// -------------------------
 struct Byte
 {
   enum class SegNames {
	es = 0,
	cs,
	ss,
	ds,
	fs,
	gs,
   };
//   virtual void to_json(nlohmann::json& nlohmann_json_j, const Byte& nlohmann_json_t)=0;
   virtual ~Byte(){};

 };

 struct Data: public Byte
 {
   std::unordered_set<size_t> sizes;
   std::unordered_set<size_t> read_sizes;
   std::unordered_set<size_t> write_sizes;
   size_t read_count = 0;
   size_t write_count = 0;
   bool m_array = false;
//   std::unordered_set<dd> referedcsip;

   friend void to_json(nlohmann::json& nlohmann_json_j, const Data& nlohmann_json_t);
   virtual ~Data(){}
 };

 struct Code: public Byte
 {
   std::array<std::unordered_set<dw>, 6> m_segs; // all segs values faced for current instruction
   bool m_video = false;
   std::unordered_set<dd> accessingdata;
   size_t exec_count = 0;
   std::unordered_map<dd, size_t> edge_to_count;
   std::unordered_map<dd, uint32_t> edge_to_kind_mask;

   bool m_selfmodified = false;
   std::unordered_set<std::string> m_selfvariants;
   size_t m_modsize = 0;
   size_t size = 0;
  
   friend void to_json(nlohmann::json& nlohmann_json_j, const Code& nlohmann_json_t);
   virtual ~Code(){}
 };

 class ShadowMemory
 {
   std::unordered_map< dd, std::shared_ptr<Data> > m_data;
   std::unordered_map< dd, std::shared_ptr<Code> > m_code;
   std::unordered_set<dd> m_jumps;

   public:
   void collect_segs();
   void collect_data(dd b, size_t s, bool is_write = false);
   void collect_selfmod(dw seg, dd ip, size_t modsize, size_t size, const char * oldins, const char * newins);
   void collect_cross_jumps(dw target_cs, dd target_ip, FlowKind kind = FlowKind::Other);
   void dump();
   friend void to_json(nlohmann::json& nlohmann_json_j, const ShadowMemory& nlohmann_json_t);
   

 };

  extern ShadowMemory shadow_memory;
// -------------------------

}

extern bool trace_instructions;
extern volatile bool defered_custom_call; // int was called by interpreter which m2c have to execute later
extern bool from_callf; // check if m2c's interrupt called from interpreter or callf from m2c to interperter's bios
extern volatile bool from_interpreter;
extern volatile bool doing_single_step;
extern volatile bool compare_jump;
extern Bitu old_cycles; // backup remaining cycles
extern std::stack<uint32_t> return_point; // where interpreter should return cntrol to m2c
extern void print_instruction(uint16_t newcs, uint32_t newip);
void init_get_fname(char *executable_name_out, char *source_path);

#if DOSBOX_CUSTOM
// old values of CS:IP (directly before the call), usable for diagnosis
extern uint16_t custom_oldCS, custom_oldIP;


void custom_init(Section *sec);

/* prototypes for Execution operations */
void custom_init_prog(char *, uint16_t, uint16_t, uint16_t);
void custom_exit_prog(uint8_t);
void custom_init_entrypoint(char *, uint16_t);

/* prototypes for CPU operations */
int custom_callf(Bitu, Bitu);

#else /* DOSBOX_CUSTOM */

static inline void custom_init(Section *sec) { }

/* prototypes for Execution operations */
static inline void
custom_init_prog(char *name, uint16_t relocate, uint16_t init_cs, uint16_t init_ip) { }
static inline void custom_init_entrypoint(char *, uint16_t) { }

static inline void custom_exit_prog(uint8_t exitcode) { }

/* prototypes for CPU operations */
static inline int custom_callf(Bitu seg, Bitu off) { return 0; }

#endif /* DOSBOX_CUSTOM */

#endif /* DOSBOX_CUSTOM_H */
