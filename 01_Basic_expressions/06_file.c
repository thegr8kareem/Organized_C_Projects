/*
17. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. Go to the editor
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40
*/

#include <stdio.h>

int main()
{
    int timeInSeconds;
    int hours;
    int minutes;
    int seconds;

    printf("Enter the time in seconds: \n");
    scanf("%d",&timeInSeconds);

    hours = timeInSeconds / 3600;
    minutes = (timeInSeconds % 3600) / 60;
    seconds = (timeInSeconds % 3600) % 60;

    printf("There are:\n%d Hours\n%d Minutes\n%d Seconds",hours,minutes,seconds);


    return 0;
}