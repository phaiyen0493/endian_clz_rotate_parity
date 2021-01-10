#include "major1.h"

void rotate_right(unsigned int input, int pos) {
   
    unsigned int initial = input;
    unsigned int cmp= input;

   for (int i=0; i<pos; i++)
    {

        input =  (cmp >> 1) | (cmp << 31);
	

        cmp =input;
    }
    printf("%u rotate by %d position gives: %u\n", initial,pos,input);
}
