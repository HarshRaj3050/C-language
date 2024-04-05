// WAP to display the greatest among the three number

#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter the First Number : ");
    scanf("%d", &num1);
    printf("Enter the Second Number : ");
    scanf("%d", &num2);
    printf("Enter the Third Number : ");
    scanf("%d", &num3);

    if(num1 > num2) {
        if(num1 > num3) {
            printf("First Number is Greater\n");
        } else {
            printf("Third Number is Greater\n");
        }
    } else {
        if(num2 > num3) {
            printf("Second Number is Greater\n");
        } else {
            printf("Third Number is Greater\n");
        }
    }

    return 0;
}
