// C program to find maximum and minimum between two numbers using functions

#include <stdio.h>
// Function declarations
int max(int num1, int num2);
int min(int num1, int num2);

int main() 
{
    int num1, num2, maximum, minimum;
    // Input two numbers from user
    printf("Enter any two numbers: \n");
    scanf("%d%d", &num1, &num2);
    
    maximum = max(num1, num2);  // Call maximum function
    minimum = min(num1, num2);  // Call minimum function
    
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d", minimum);
    return 0;
}
// Find maximum between two numbers.
int max(int num1, int num2)
{
    if(num1 > num2) {
    return num1;
    }
    else 
    return num2;
}
// Find minimum between two numbers.
int min(int num1, int num2) 
{
    if(num1 > num2) {
    return num2;
    }
    else 
    return num1;
}