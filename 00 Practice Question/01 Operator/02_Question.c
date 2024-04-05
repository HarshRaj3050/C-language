// WAP to calculate Simple Interest.

#include <stdio.h>
#include <math.h>
int main() {
    float p, r, t, si;
    printf("Enter the principal: ");
    scanf("%f", &p);

    printf("Enter the rate: ");
    scanf("%f", &r);

    printf("Enter the time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    printf("The Simple interest is %.2f", si);
    return 0;
}