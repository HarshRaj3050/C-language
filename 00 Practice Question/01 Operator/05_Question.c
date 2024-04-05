// WAP to swap two numbers.

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter the First Number : ");
    scanf("%d", &a);
    
    printf("Enter the Second Number : ");
    scanf("%d", &b);

    printf("\n-----Before Swap-----\n");
    printf("First Number : %d Second Number %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\n-----After Swap-----\n");
    printf("First Number : %d Second Number %d\n", a, b);

    return 0;
}
