// WAP to display the greatest between two given number

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the First Number : ");
    scanf("%d", &num1);
    printf("Enter the Second Number : ");
    scanf("%d", &num2);

    if(num1 > num2) {
        printf("First Number is Greater\n");
    } 
    else if(num2 > num1) {
        printf("Second Number is Greater\n");
    } 
    else {
        printf("Both Numbers are Same\n");
    }

    return 0;
}
