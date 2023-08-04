// C program to print the factorial of n number using recursion

#include <stdio.h>
int factorial(int a);
int main()
{
    int input, fact;
    printf("Enter the Number : ");
    scanf("%d", &input);
    fact = factorial(input);
    printf("The factorial of %d is : %d", input, fact);
    return 0;
}
int factorial(int a)
{
    int f;
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        f = a * factorial(a - 1);
        return f;
    }
}