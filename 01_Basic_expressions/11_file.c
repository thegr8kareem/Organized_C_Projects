/*
27. Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers. Go to the editor
Test Data :
Input the first number: 5
Input the second number: -4
Input the third number: 10
Input the fourth number: 15
Input the fifth number: -1
Expected Output:
Number of positive numbers: 3
Number of negative numbers: 2
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int firstNum;
    int secondNum;
    int thirdNum;
    int fourthNum;
    int fifthNum;
    int positiveCounter = 0;
    int negativeCounter = 0;

    printf("Enter the value: \n");
    scanf("%d", &firstNum);

    printf("Enter the value: \n");
    scanf("%d", &secondNum);

    printf("Enter the value: \n");
    scanf("%d", &thirdNum);

    printf("Enter the value: \n");
    scanf("%d", &fourthNum);

    printf("Enter the value: \n");
    scanf("%d", &fifthNum);

    if (firstNum % 2 != 0)
    {
        negativeCounter += 1;
    }
    else
    {
        positiveCounter += 1;
    }

    if (secondNum % 2 != 0)
    {
        negativeCounter += 1;
    }
    else
    {
        positiveCounter += 1;
    }

    if (thirdNum % 2 != 0)
    {
        negativeCounter += 1;
    }
    else
    {
        positiveCounter += 1;
    }

    if (fourthNum % 2 != 0)
    {
        negativeCounter += 1;
    }
    else
    {
        positiveCounter += 1;
    }

    if (fifthNum % 2 != 0)
    {
        negativeCounter += 1;
    }
    else
    {
        positiveCounter += 1;
    }

    printf("The number of positive numbers are %d\n", positiveCounter);
    printf("The number of negative numbers are %d\n", negativeCounter);

    return 0;
}