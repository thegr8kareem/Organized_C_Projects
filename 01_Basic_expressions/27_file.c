/*
91. Write a C program to find the angle between (12:00 to 11:59) the hour hand and the minute hand of a clock. The hour hand and the minute hand are always between 0 and 180 degrees. Go to the editor
For example, when it's 12 o'clock, the angle of the two hands is 0 while 3:00 is 45 degrees and 6:00 is 180 degrees.
Sample Output:
Input hour(h) and minute(m) (separated by a space):
3 0
At 3:00 the angle is 90.0 degrees.
Input hour(h) and minute(m) (separated by a space):
6 15
The angle is 90.0 degrees at 6:15.
Input hour(h) and minute(m) (separated by a space):
12 0
At 12:00 the angle is 0.0 degrees.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int hour;
    int minute;
    int totalHours = 12;
    float degree;

    printf("Enter the hour and then the minute:\n");
    scanf("%d  %d",&hour,&minute);

    degree = (hour + (minute / 60.0)) / totalHours * 360.0;

    printf("The angle at %d:%d is %.2f\n",hour,minute,degree);
    
    return 0;
}