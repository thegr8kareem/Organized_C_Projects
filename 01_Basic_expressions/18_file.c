/*
53. Write a C program that accepts the principle, rate of interest, and time and calculates simple interest. Go to the editor
Test Data:
Input Data: p = 10000, r = 10% , t = 12 year
Expected Output:
Input principle, Rate of interest & time to find simple interest:
Simple interest = 12000
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int interest;
    float principal;
    int rate;
    int time;

    printf("Enter the principal: \n");
    scanf("%f",&principal);

    printf("Enter the time: \n");
    scanf("%d",&time);

    printf("Enter the rate: \n");
    scanf("%d",&rate);

    interest = (principal * rate * time) / 100;

    printf("The interest to be paid on %.2f is %d\n",principal,interest);
    return 0;
}