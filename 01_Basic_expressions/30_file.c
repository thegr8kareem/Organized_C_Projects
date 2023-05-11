/*
99. Write a C program that takes some integer values from the user and prints a histogram. Go to the editor
Sample Output:
Input number of histogram bar (Maximum 10):
4
Input the values between 0 and 10 (separated by space):
9
7
4
3


Histogram:
#########
#######
####
###
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int num1, num2, num3, num4;

    printf("Enter any 4 numbers between 0 and 10: \n");
    scanf("%d  %d  %d  %d", &num1, &num2, &num3, &num4);

    printf("Histogram:\n");

    if (num1 <= 10)
    {
        for (int i = 0; i < num1; i++)
        {
            printf("#");
        }
    }
    printf("\n");
    
    if (num2 <= 10)
    {
        for (int i = 0; i < num2; i++)
        {
            printf("#");
        }
    }
    printf("\n");

    if (num3 <= 10)
    {
        for (int i = 0; i < num3; i++)
        {
            printf("#");
        }
    }
    printf("\n");

    if (num4 <= 10)
    {
        for (int i = 0; i < num4; i++)
        {
            printf("#");
        }
    }
    printf("\n");


    return 0;
}