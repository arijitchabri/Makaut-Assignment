// C program to input angles of a triangle and check whether triangle is valid or not

#include <stdio.h>
#include <conio.h>

void main()
{
    int angle1, angle2, angle3;

    printf("Enter three angles: ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    if ((angle1 + angle2 + angle3) == 180)
        printf("It is a valid triangle");
    else
        printf("It is not a valid triangle");
}