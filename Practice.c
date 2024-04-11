#include<stdio.h>
int main() {
    int option;
    float first, second, result;
    printf("1---add\n2---sub\n3---muilt\n4---div\n");
    printf("Enter the Option : ");
    scanf("%d", &option);
    printf("Enter First Number : ");
    scanf("%f", &first);
    printf("Enter Second Number : ");
    scanf("%f",  &second);
    switch (option)
    {
    case 1:
        result = first + second;
        break;
    case 2:
        result = first - second;
        break;
    case 3: 
        result = first * second;
        break;
    case 4:
        result = first / second;
    default:
        printf("Enter the correct option");
        break;
    }
    printf("\nResult is : %.2f", result);
    return 0;
}