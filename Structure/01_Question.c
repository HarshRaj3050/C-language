/* Write a program to store the details of 3 employees from user-defined data. 
   Use the structure declared above. */

#include <stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e[3];
    for (int i = 1; i < 4; i++)
    {
        printf("%d. Enter Employee details\n\n", i);
        
        printf("%d. Enter employee name : ", i);
        scanf("%s", e[i].name);
        printf("%d. Enter employee code : ", i);
        scanf("%d", &e[i].code);
        printf("%d. Enter employee salary : ", i);
        scanf("%f", &e[i].salary);
        printf("\n");
    }
    // Display the entered details
    printf("Entered Employee Details:\n");
    for (int i = 1; i < 4; i++)
    {
        printf("%d. Name: %s, Code: %d, Salary: %.2f\n", i + 1, e[i].name, e[i].code, e[i].salary);
    }
    return 0;
}