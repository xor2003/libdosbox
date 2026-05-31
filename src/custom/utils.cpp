//
// Created by xor on 2.10.24..
//

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sstream>
#include "utils.h"

namespace m2c {
// thanks to paxdiablo http://stackoverflow.com/users/14860/paxdiablo for the
// Function to print a hexadecimal dump of memory contents.
void hexDump(void *addr, int len)
{
	int i;
	unsigned char buff[17];
	unsigned char *pc = (unsigned char *)addr;
	(void)buff;
	printf("hexDump %p:\n", addr);

	if (len == 0) {
		printf("  ZERO LENGTH\n");
		return;
	}
	if (len < 0) {
		printf("  NEGATIVE LENGTH: %i\n", len);
		return;
	}

	// Process every byte in the data.
	for (i = 0; i < len; i++) {
		// Multiple of 16 means new line (with line offset).
		if ((i % 16) == 0) {
			// Just don't print ASCII for the zeroth line.
			if (i != 0)
				printf("  %s\n", buff);

			// Output the offset.
			printf("  %04x ", i);
		}

		// Now the hex code for the specific character.
		printf(" %02x", pc[i]);

		// And store a printable ASCII character for later.
		if ((pc[i] < 0x20) || (pc[i] > 0x7e))
			buff[i % 16] = '.';
		else
			buff[i % 16] = pc[i];
		buff[(i % 16) + 1] = '\0';
	}

	// Pad out last line if not exactly 16 characters.
	while ((i % 16) != 0) {
		printf("   ");
		i++;
	}

	// And print the final ASCII bit.
	printf("  %s\n", buff);
}

// Function to compare and print a hexadecimal dump of two memory regions.
void cmpHexDump(void *addr1, void *addr2, int len)
{
	int i;
	size_t j;
	unsigned char buff1[17];
	unsigned char buff2[17];
	unsigned char *pc1 = (unsigned char *)addr1;
	unsigned char *pc2 = (unsigned char *)addr2;

	printf("cmpHexDump %p %p:\n", (void *)pc1, (void *)pc2);

	if (len == 0) {
		printf("  ZERO LENGTH\n");
		return;
	}
	if (len < 0) {
		printf("  NEGATIVE LENGTH: %i\n", len);
		return;
	}

	// Process every byte in the data.
	for (i = 0; i < len; i++) {
		// Multiple of 16 means new line (with line offset).
		size_t size = i + 16 <= len ? 16 : len - i;

		// Compare memory contents and print differences.
		if (memcmp(&pc1[i], &pc2[i], size) != 0) {
			// Output the offset.
			printf("  %04x ", i);

			// Print the first memory region.
			for (j = 0; j < size; j++) {
				// Now the hex code for the specific character.
				printf(" %02x", pc1[i + j]);

				// And store a printable ASCII character for later.
				if ((pc1[i + j] < 0x20) || (pc1[i + j] > 0x7e))
					buff1[j] = '.';
				else
					buff1[j] = pc1[i + j];
			}
			buff1[j] = '\0';
			printf("  %s\n", buff1);

			// Print the second memory region.
			printf("       ");
			for (j = 0; j < size; j++) {
				// Now the hex code for the specific character.
				printf(" %02x", pc2[i + j]);

				// And store a printable ASCII character for later.
				if ((pc2[i + j] < 0x20) || (pc2[i + j] > 0x7e))
					buff2[j] = '.';
				else
					buff2[j] = pc2[i + j];
			}
			buff2[j + 1] = '\0';

			// And print the final ASCII bit.
			printf("  %s\n", buff2);
		}

		i += size;
	}
}

} // namespace m2c

// Function to count the number of equal bytes between two memory regions.
size_t countEqual(const db *addr1, const db *addr2, int len)
{
	size_t bytes = 0;
	while (len && *(addr1++) == *(addr2++)) {
		++bytes;
	}
	return bytes;
}

#if _WIN32
void *memmem(const void *haystack,
             size_t haystack_len,
             const void *const needle,
             const size_t needle_len)
{
	if (haystack == NULL)
		return NULL; // or assert(haystack != NULL);
	if (haystack_len == 0)
		return NULL;
	if (needle == NULL)
		return NULL; // or assert(needle != NULL);
	if (needle_len == 0)
		return NULL;

	for (const char *h = (const char *)haystack; haystack_len >= needle_len;
	     ++h, --haystack_len) {
		if (!memcmp(h, needle, needle_len)) {
			return (void *)h;
		}
	}
	return NULL;
}
#endif
