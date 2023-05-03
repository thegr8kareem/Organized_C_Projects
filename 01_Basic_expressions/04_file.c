/*
14. Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points). Go to the editor
Test Data :
Input total distance in km: 350
Input total fuel spent in liters: 5
Expected Output:
Average consumption (km/lt) 70.000
*/

#include <stdio.h>

int main()
{
    int totalDistance;
    float totalFuelUsed;
    float average;

    printf("Enter teh total distance in kilometers travelled: \n");
    scanf("%d",&totalDistance);

    printf("Enter the liters of fuel used: \n");
    scanf("%f",&totalFuelUsed);

    average = totalDistance / totalFuelUsed;

    printf("The average consumption(km/lt) is: %.2f",average);


    return 0;
}