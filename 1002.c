#include <stdio.h>

void main()
{
    float pi = 3.14159, r, A;

    printf("Write the circumference radius: ");
    scanf("%f", &r);

    A = pi * (r*r);

    printf("The area is: %.2f\n", A);
}