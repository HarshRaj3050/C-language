// Write a function that prints Namaste if user is Indian & Bonjour if the user is french.

#include <stdio.h>
void indian(void);
void french(void);

int main()
{
    char i, f, I, F, contry;
    printf("Choose Your Contry Indian(I), French(F) : ");
    scanf("%c", &contry);
    if (contry == 'i' || contry == 'I')
    {
        indian();
    }
    else if (contry == 'f' || contry == 'F')
    {
        french();
    }
    else
    {
        printf("Invalid Word!!");
    }
    return 0;
}

void indian(void)
{
    printf("Namaste");
}
void french(void)
{
    printf("Bonjour");
}