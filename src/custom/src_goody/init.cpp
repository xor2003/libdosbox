#include <cstring>

void init_get_fname(char *dst, char *src);

//Initializer - is startet if executed file is SCHICKM.EXE/BLADEM.EXE or GEN.EXE
//Returns true if the desired programm is started
bool masm2c_init(char *name, unsigned short reloc, unsigned short _cs, unsigned short ip)
{

	char fname[81];
	int ver;

	init_get_fname(fname, name);

	if (strcmp(fname, "goodym.com")) return false;

	return true;
}


