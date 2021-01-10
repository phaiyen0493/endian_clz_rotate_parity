#include "major1.h"

void count_leading_zeroes(unsigned int input)
{
	int bit_size = 32;				            
	int count = 0;					            
	unsigned int init = input;			        
	while(!(input & (1 << (bit_size - 1))))		
	{
		input = (input << 1);			       
		count++;				               
	}
	
	printf("The number of leading zeroes in %u is %d\n", init, count);	
}
