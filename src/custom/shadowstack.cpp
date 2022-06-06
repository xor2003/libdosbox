#include "asm.h"

namespace m2c{
  void ShadowStack::push (_STATE * _state, dd value)
  {
     
     if (!m_active && !m_forceactive) return;
//     m2c::log_info("+++ShadowStack::push %x\n",value);

//    if (m2c::debug)
      {
        X86_REGREF Frame f;
        f.cs = cs;
        f.ip = eip;
        f.sp = sp;
        f.value = value;
        f.addcounter = m2c::counter;
        f.remcounter = 0;
        f.pointer_ = (dw *) m2c::raddr_ (ss, sp);
        f.itwascall = m_itiscall;
        f.call_deep = m_itiscall?++m_deep:0;
        //if (m_current == m_ss.size ())
        //  m_ss.resize (m_current + 1);
        print_frame(f);
        m_current = esp;
        m_ss[esp] = f;
     m2c::log_debug("m_itiscall=%d m_deep=%d\n",m_itiscall,m_deep);
//     m2c::log_info("ssize=%d\n",m_ss.size());
      }
      m_itiscall = false;
//     m2c::log_info("---ShadowStack::push\n");
  }

 bool ShadowStack::itwascall() {
   X86_REGREF
   return m_ss[esp].itwascall;
  }

  void ShadowStack::pop (_STATE * _state)
  {
     if (!m_active && !m_forceactive) 
       {
                  log_debug ("non-active %x %x\n", m_active, m_forceactive);
		return;
	}
//    if (m2c::debug)
      {
        X86_REGREF
          if (!m_ss.empty () && m_current && sp - m_ss.at(m_current).sp > 10)
          {
                  log_error("Difference of SP and frame SP is to big\n");
                  return;
          }

                  log_debug ("m_needtoskipcall %d\n", m_needtoskipcall);
//    m2c::log_info("ssize=%d\n",m_ss.size() );
          if (!m_ss.empty () && m_current)
          {
            size_t counter = m2c::counter;
            dd tsp;
            size_t tcount = 0;
            do
              {
                tsp = m_ss.at(m_current ).sp;
                if ((tcount++) > 0)
                  log_error ("uncontrolled pop meet in past which added %x sp=%x\n", m_ss.at(m_current).addcounter, tsp);
                if (tsp <= sp)
                  m_ss.at(m_current).remcounter = counter;
                  if (m_ss.at(m_current).itwascall) ++m_needtoskipcall;
                print_frame(m_ss.at(m_current));
                m_current += 2; 
              }

            while (tsp < sp);

           if (m_itisret && m_ss.at(m_current-2).itwascall) --m_needtoskipcall;

      m_currentdeep = m_ss.at(m_current-2).call_deep;
                  log_debug ("m2c::counter %x m_deep %d collected m_currentdeep %d m_needtoskipcall %d\n", counter, m_deep, m_currentdeep,m_needtoskipcall);
          }
      
      }
      m_itisret = false;
  }

        void ShadowStack::decreasedeep(){
log_debug("decreasedeep m_deep=%d ",m_deep);
//pop(0);
//m_deep=m_currentdeep-1;
--m_deep;
log_debug("m_deep=%d ",m_deep);
}
        bool ShadowStack::needtoskipcalls(){
/*
log_debug("ret m_currentdeep=%d ",m_currentdeep);
m_needtoskipcall=m_currentdeep?m_deep-m_currentdeep:0; 
if (m_needtoskipcall<0) {m_needtoskipcall=0;}
//m_deep=m_currentdeep?m_currentdeep-1:m_deep; 
--m_deep;
log_debug("m_deep=%d ",m_deep);
m_currentdeep=0;
log_debug("m_currentdeep=%d\n",m_currentdeep);
*/
log_debug("m_needtoskipcall=%d\n",m_needtoskipcall);
return m_needtoskipcall;}


  void ShadowStack::print_frame(const Frame& f)
  {
            log_debug("~~ %4d %8x %8x %04x:%04x sp=%4x %4x~%4x\n", f.itwascall, f.addcounter, f.remcounter, f.cs, f.ip, f.sp, f.value, *f.pointer_);
  }

  void ShadowStack::print (_STATE * _state)
  {
    if (m2c::debug)
      {
        X86_REGREF if (!m_ss.empty ())
          printf (" Shadow Stack memory dump (incl left garbage):\n");
        printf ("%4s %8s %8s %4s:%4s %7s %4s %6s\n", "Call", "Alloc", "Dealloc", "cs", "ip", "sp", "Value", "Current value");
        for (int i = m_ss.size () - 1; i >= 0; i--)
          {
            Frame f = m_ss.at(i);
            if (!f.init) continue;
            if (i == m_current)
              printf ("  ");
            printf ("%4d %8x %8x %04x:%04x sp=%4x %4x", f.call_deep, f.addcounter, f.remcounter, f.cs, f.ip, f.sp, (dw) f.value);
            if ((dw) *f.pointer_ != (dw) f.value)
              printf (" ^%4x^\n", (dw) *f.pointer_);
            else
              printf ("\n");
          }
      }
  }

}
