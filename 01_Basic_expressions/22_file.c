/*
79. Write a C program using looping to produce the following table of values. Go to the editor
Sample Output:

x       x+2     x+4     x+6
--------------------------------
1       3       5       7
4       6       8       10
7       9       11      13
10      12      14      16
13      15      17      19
*/

#include <stdio.h>
#include <math.h>

int main()
{
    char word[100] = "======================================";
    char text[100] = "x       x+2       x+4       x+6";
    int numbers[5];
    int results[100];
    int increaseNUM = 0;
    int limit = 0;


    printf("I am creating a table of five numbers: \n");
    printf("Enter the five numbers one at a time: \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("%s\n", text);
    printf("%s\n", word);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (increaseNUM > 6)
            {
                increaseNUM = 0;
            }

            results[limit] = numbers[i] + increaseNUM;
            increaseNUM += 2;
            limit++;
        }
    }

    int output = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d          ", results[output]);
            output++;
        }
        printf("\n");
    }

    return 0;
}