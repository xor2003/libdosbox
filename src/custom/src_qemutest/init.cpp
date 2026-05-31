#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "init.h"

//#include "iplay.h"
namespace m2c{
extern int start();
}
// Is the game running?
static int init = 0;

//Segment relocation of the game
Bitu reloc_game; // in paragraphs from MemBase

//Datasegment
unsigned short datseg = 0;
Bit8u *p_datseg = NULL;
//Datesegment relocation from game if gen is called
unsigned short datseg_bak = 0;
Bit8u *p_datseg_bak = NULL;




/**
	init_get_fname - copies the filename from src to dst
	@src:	pathname to a file
	@dst:	string where the filename shoukld be stored
*/
void init_get_fname(char *dst, char *src) {
	char *p = NULL;
	char *c = src;

	while (*c != '\0') {
		if (*c == '\\')
			p = c + 1;
		c++;
	}

	/* No backslash in src*/
	if (p == NULL)
		p = src;

	while ((*dst++ = tolower(*p++)));
	*dst = '\0';
}

//Initializer - is startet if executed file is SCHICKM.EXE/BLADEM.EXE or GEN.EXE
//Returns true if the desired programm is started
bool masm2c_init(char *name, unsigned short reloc, unsigned short _cs, unsigned short ip)
{

	char fname[81];
	int ver;

	init_get_fname(fname, name);

	if (strcmp(fname, "debug.com")) return false;

	/* Check CS:IP in the EXE-Header are 0:0
	 * and the first executed instruction is mov dx,i16 */
	//if (_cs != 0 || ip != 0 || real_readb(reloc+_cs, ip) != 0xba)
//		return false;

	/* Show CS:IP on the virtual machine and the pointer to 0:0 */
	m2c::log_debug("\n\nCS:IP 0x%x:0x%x\tMemBase: %p\n", reloc, ip, MemBase);

	/* Read and show the Datasegment */
	datseg_bak = datseg;
	datseg = real_readw(reloc, ip+1);
	p_datseg_bak = p_datseg;
	p_datseg = MemBase + PhysMake(datseg, 0);
	m2c::log_debug("Dseg: 0x%X\n", datseg);

m2c::start();
	return true;
}


void masm2c_exit(unsigned char exit)
{
		init++;
		datseg = datseg_bak;
		datseg_bak = 0;
		p_datseg = p_datseg_bak;
		p_datseg_bak = NULL;
//		reloc_gen = 0;
		m2c::log_info("masm2c_exit Exiting\n");

}

int init_callf(unsigned selector, unsigned offs)
{

	return 0;
}

// Intercept near CALLs, 16-Bit
int init_calln16(unsigned offs) {

	int ret = 0;

	return ret;
}

//namespace m2c{ m2cf* _ENTRY_POINT_; }
void init_entrypoint(Bit16u relocate)
{
   m2c::log_debug("Starting program\n");
m2c::start();
}