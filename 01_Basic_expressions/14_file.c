/*
41. Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user. Go to the editor
Test Data :
Input number of lines: 5
Expected Output:
1 2 3
4 5 6
7 8 9
10 11 12
13 14 15
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int numberOfLines;
    int initialValue = 0;

    printf("Enter the the number of lines you want to use: \n");
    scanf("%d",&numberOfLines);

    for (int i = 0; i < numberOfLines; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            initialValue += 1;
            printf("%d  ",initialValue);
        }
        printf("\n");        
    }
    
    return 0 ;
}