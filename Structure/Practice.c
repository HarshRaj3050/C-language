#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1[3];
    for (int i = 1; i < 4; i++)
    {
        printf("%d. Enter Emloyee details\n\n", i);
        
        printf("%d. Enter emloyee name : ", i);
        scanf("%s", e1[i].name);
        printf("%d. Enter emloyee code : ", i);
        scanf("%d", &e1[i].code);
        printf("%d. Enter emloyee salary : ", i);
        scanf("%f", &e1[i].salary);
        printf("\n");
    }
    // Display the entered details
    printf("Entered Employee Details:\n");
    for (int i = 1; i < 4; i++)
    {
        printf("%d. Name: %s, Code: %d, Salary: %.2f\n", i + 1, e1[i].name, e1[i].code, e1[i].salary);
    }
    return 0;
}