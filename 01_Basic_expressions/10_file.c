/*
20. Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots. Go to the editor
Test Data :
Input the first number(a): 25
Input the second number(b): 35
Input the third number(c): 12
Expected Output:
Root1 = -0.60000
Root2 = -0.80000
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
    int sum = 0;

    printf("Enter the value: \n");
    scanf("%d",&firstNum);

    printf("Enter the value: \n");
    scanf("%d",&secondNum);

    printf("Enter the value: \n");
    scanf("%d",&thirdNum);

    printf("Enter the value: \n");
    scanf("%d",&fourthNum);

    printf("Enter the value: \n");
    scanf("%d",&fifthNum);

    if (fifthNum % 2 != 0 )
    {
        sum += fifthNum;
    }
    if (fourthNum % 2 != 0 )
    {
        sum += fourthNum;
    }
    if (thirdNum % 2 != 0 )
    {
        sum += thirdNum;
    }
    if (secondNum % 2 != 0 )
    {
        sum += secondNum;
    }
    if (firstNum % 2 != 0 )
    {
        sum += firstNum;
    }

    printf("The total sum of only odd numbers is %d\n",sum);

    
    

    
    return 0;
}