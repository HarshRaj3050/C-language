// Write a function to convert celsius temperature into fahrenheit.

#include<stdio.h>
float celsius(float a);
int main() {
    int a;
    printf("Enter the celsius (convert fahrenheit) : ");
    scanf("%d", &a);
    printf("%d celsius = %.2f fahrenheit", a, celsius(a));
    return 0;
}

float celsius(float a) {
    float result;
    result = (a * 9/5) + 32;
    return result;
}