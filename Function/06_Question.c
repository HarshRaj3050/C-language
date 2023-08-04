// C program to check even or odd using functions

#include <stdio.h>
int evenOrOdd(int n);

int main()
{
    int n;
    printf("Enter Number to check even or odd : ");
    scanf("%d", &n);
    evenOrOdd(n);
    return 0;
}

int evenOrOdd(int n)
{
    if (n % 2 == 0)
    {
        printf("The Number is even");
        return n;
    }
    else
    {
        printf("The Number is odd");
        return n;
    }
}
