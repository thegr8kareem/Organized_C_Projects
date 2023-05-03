/*
52. Write a C program to read an array of length 6 and find the smallest element and its position. Go to the editor
Test Data:
Input the length of the array: 5 Input the array elements:
25
35
20
14
45
Expected Output:
Smallest Value: 14
Position of the element: 3
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int numArray[5];
    int limit = 4;
    int numberPosition;
    int smallNum;

    printf("Enter the value:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numArray[i]);
    }

    for (int i = 0; i <= 4; i++)
    {
        if (limit >= 1)
        {
            if (numArray[limit] < numArray[limit - 1])
            {
                smallNum = numArray[limit];
                numberPosition = limit;
            }
            else
            {
                smallNum = numArray[limit - 1];
                numberPosition = limit - 1;
            }
            limit--;
        }
    }

    printf("Smallest Value: %d\nPosition of the element: %d\n", smallNum, numberPosition);
    return 0;
}