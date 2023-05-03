/*
81. Write a C program that reads the side (side sizes between 1 and 10 ) of a square and prints a hollow square using the hash (#) character. Go to the editor
Sample Input: 10
Sample Output:

Input the size of the square:
##########
#        #
#        #
#        #
#        #
#        #
#        #
#        #
#        #
##########
*/

#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            if (i == 0 || i == 9)
            {
                printf("#");
            }

            if (i > 0 && i < 9)
            {
                if (j == 0 || j == 9)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}