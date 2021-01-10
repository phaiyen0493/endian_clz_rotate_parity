
#include "major1.h"

void parity(unsigned int input) {

	
	int x, count=0;
   	 for (int i=31; i>=0; i--)
	   {
		x = input >> i;	
		   if (x & 01)
			{
				count++;
			}
	   }
    	printf("The parity of %u is ",input);

	
	if (count%2==0)
	{
		printf("0\n");
		return;
	}
	printf("1\n");
	return;
}

