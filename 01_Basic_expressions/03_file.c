/*
12. Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month. Go to the editor
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00

*/

#include <stdio.h>

int main()
{
    int employeeID;
    float workingHours;
    float salaryPerHour = 15000.00;

    printf("Enter your ID:\n");
    scanf("%d",&employeeID);

    printf("Enter your total working hours:\n");
    scanf("%f",&workingHours);

    printf("Employee ID: %d\nSalary: USD %.2f ",employeeID,workingHours * salaryPerHour );

    return 0;
}
