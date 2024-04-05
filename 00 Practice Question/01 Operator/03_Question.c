// WAP to convert temperature given in Fahrenheit into degree Celsius.

#include<stdio.h>
int main() {
    float f,c;
    printf("Enter the Fahrenheit = ");
    scanf("%f", &f);
    c = ((f-32)*5) / 9;
    printf("%f Fahrenheit = %.1f Celsius", f,c);
    return 0;   
}