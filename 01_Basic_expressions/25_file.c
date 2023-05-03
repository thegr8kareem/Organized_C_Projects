/*
83. Write a C program that reads an integer (7 digits or fewer) and counts the number of 3s in the given number. Go to the editor
Sample Input: 538453
Sample Output:
Input a number: The number of threes in the said
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char number[10];
    int counter;

    printf("Enter the number: \n");
    scanf("%s",&number);

    for (int i = 0; i < strlen(number); i++)
    {
        if (number[i] == '3')
        {
            counter++;
        } 
    }

    printf("The number of threes is said to be %d",counter);
    return 0;
}