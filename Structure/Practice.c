#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salery;
    char name[10];
} emp;

int main()
{
    emp e[3];
    for (int i = 0; i < 3; i++)
    {
        printf("%d. Enter name : ", i + 1);
        scanf("%s", e[i].name);
        printf("%d. Enter code : ", i + 1);
        scanf("%d", &e[i].code);
        printf("%d. Enter salery : ", i + 1);
        scanf("%f", &e[i].salery);
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d. Employee detiales", i + 1);
        printf("Name : %s,  Code : %d,  Salery : %f,  \n", e[i].name, e[i].code, e[i].salery);
    }

    return 0;
}