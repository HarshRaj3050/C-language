// WAP to check that a given number is even or odd

#include <stdio.h>
int main() {
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Number is Even\n");
    } else {
        printf("Number is Odd\n");
    }

    return 0;
}
