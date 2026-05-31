#define DOSBOX_masm2c_H

#ifdef DOSBOX_CUSTOM

/* prototypes for Execution operations */
bool masm2c_init(char *, unsigned short, unsigned short, unsigned short);
void masm2c_exit(unsigned char);

/* prototypes for CPU operations */
int masm2c_callf(unsigned, unsigned);
int masm2c_calln16(unsigned);

#endif /* DOSBOX_CUSTOM */
