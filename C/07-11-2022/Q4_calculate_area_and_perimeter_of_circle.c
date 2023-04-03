// C program to calculate the area and perimeter of a circle
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.141592
void main()
{

    float radius, area, perimeter;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    printf("Area: %f sq unit\n", area);
    printf("Perimeter: %f unit", perimeter);
}