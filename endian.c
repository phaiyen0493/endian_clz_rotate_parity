
#include <stdio.h>
#include "major1.h"


void endian_swap(unsigned int input)
{
	unsigned int byte0, byte1, byte2, byte3, output;
	
	byte0 = (input & 0x000000ff) >> 0;
	byte1 = (input & 0x0000ff00) >> 8;
	byte2 = (input & 0x00ff0000) >> 16;
	byte3 = (input & 0xff000000) >> 24;

	
	output = ((byte0 << 24) | (byte1 << 16) | (byte2 << 8) | (byte3 << 0));
	printf("Endian swap of %u gives %u\n", input, output);
}
