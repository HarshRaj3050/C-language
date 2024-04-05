// WAP to calculate area of a circle

#include <stdio.h>
#define pi 3.14
int main() {
    float radius, area;
    printf("Enter the radius = ");
    scanf("%f", &radius);
    area = pi * (radius * radius);
    printf("Area of Circle = %.2f", area);
    return 0;
}