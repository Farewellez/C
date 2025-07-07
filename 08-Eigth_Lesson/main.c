#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "utils.h"  

int main()
{
    system("cls");
    /*
     performing math to calculate number of values of area, surface area and volume
     with the input value's of radius 
    */

    // variables
    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;
    const double PI = 3.14;

    // take user's input
    printf("\nInput the value of radius:\n-> ");
    scanf("%lf", &radius);

    // calculate the area's value of circle
    area = PI * pow(radius, 2);
    printf("\nArea (circle): %.2lf", area);

    // calculate the surface area's value of sphere
    surface_area = 4 * PI * pow(radius, 2);
    printf("\nSurface Area (sphere): %.2lf", surface_area);

    // calculate the volume's value of sphere
    volume = 4.0/3.0 * PI * pow(radius, 3);
    printf("\nVolume (sphere): %.2lf", volume);
    // double test = 4.0/3.0;
    // double test2 = 4/3;
    // printf("\n%lf", test);
    // printf("\n%lf", test2);
}