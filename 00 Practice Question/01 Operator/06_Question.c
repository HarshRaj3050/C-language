// WAP to swap two numbers without using third variable

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the First Number: ");
    scanf("%d", &num1);

    printf("Enter the Second Number: ");
    scanf("%d", &num2);

    printf("\n-----Before Swap-----\n");
    printf("First Number: %d  Second Number: %d\n", num1, num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\n-----After Swap-----\n");
    printf("First Number: %d  Second Number: %d\n", num1, num2);

    return 0;
}
