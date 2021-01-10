
#include <stdio.h>
#include "major1.h"

int main()
    {
	    while (1)
            {
            
                long long int tinput;
                int choice;
                //menu choice for user
                printf("Enter the menu option for the operation to perform \n");
                printf("(1) Count Leading Zeroes\n");
                printf("(2) Endian Swap\n");
                printf("(3) Rotate-right\n");
                printf("(4) Parity\n");
                printf("(5) EXIT\n");
                printf("Your choice: ");
                scanf("%d", &choice);

                
                if(choice ==1 || choice ==2 || choice ==3 || choice ==4 )	{

                    
                    			do
			            {
				            printf("Enter a 32-bit number (>=1 and <= 4294967295), inclusively: ");
				            scanf("%lld", &tinput);
			            } while (tinput < 1 || tinput > 4294967295);
                
               
                unsigned int input = tinput;

                
                 if (choice==1)
                    {
                        count_leading_zeroes(input);
                    }
                else if (choice==2)
                    {
                        endian_swap(input);
                    }
                else if (choice==3)
                    {
                        int position_num;


                        do
				            {
					            printf("Enter the number of position to rotate_right the input (between 0 and 31), inclusively: ");
					            scanf ("%d", &position_num);
				            } while (position_num < 0 || position_num > 31);
                        rotate_right(input, position_num);
                    }
                else if (choice==4)
                    {
                        parity(input);
                    }
                }

                
                else{
                         if (choice==5)
                            {
                        printf("Program Terminating! Good Bye......\n");
                        break;
                            }

                        else {
                    printf("Wrong Option! Try Again \n");
                            }
                }
            }
    return 0;
    }
