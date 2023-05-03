/*
37. Write a C program to read the coordinates (x, y) (in the Cartesian system) and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV). Go to the editor
Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of numerical coordinates.
These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).
Test Data :
Input the Coordinate(x,y):
x: 25
y: 15
Expected Output:
Quadrant-I(+,+)
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    int y;

    printf("Enter the x value of the (x,y) pair: \n");
    scanf("%d",&x);

    printf("Enter the y value of the (x,y) pair: \n");
    scanf("%d",&y);

    if ((x > 0) && (y > 0))
    {
        printf("Quadrant I(+,+)");
    }
    else if ((x < 0) && (y > 0))
    {
        printf("Quadrant II(-,+)");
    }
    else if ((x < 0) && (y < 0))
    {
        printf("Quadrant III(-,-)");
    }
    else
    {
        printf("Quadrant IV(+,-)");
    }
    
    
    return 0;
}