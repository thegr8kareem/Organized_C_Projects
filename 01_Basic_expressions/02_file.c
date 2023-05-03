/* 
Q11
Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value. Go to the editor
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444
*/
#include <stdio.h>

int main()
{
    float weightOfItem1;
    float weightOfItem2;
    float noOfItem1;
    float noOfItem2;
    float average;

    printf("Enter the weight of item 1: \n");
    scanf("%f",&weightOfItem1);

    printf("Enter the weight of item 2: \n");
    scanf("%f",&weightOfItem2);

    printf("Enter the number of item 1: \n");
    scanf("%f",&noOfItem1);

    printf("Enter the number of item 2: \n");
    scanf("%f",&noOfItem2);

    average = (noOfItem1 * weightOfItem1 + noOfItem2 * weightOfItem2) / (noOfItem1 + noOfItem2);
    printf("The average value is %f\n",average);


    return 0;
}
