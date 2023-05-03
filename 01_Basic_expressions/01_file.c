// Q8 Write a C program to convert specified days into years, weeks and days
#include <stdio.h>

int main()
{
    int number0fDays;
    int years;
    int weeks;
    int days;

    printf("Enter the number of days:\n");
    scanf("%d",&number0fDays);

    years =  number0fDays / 365;
    weeks = (number0fDays % 365) / 7;
    days = (number0fDays % 365) % 7;

    printf("Years: %d\nWeeks: %d\nDays: %d\n",years,weeks,days);

    return 0;
}
