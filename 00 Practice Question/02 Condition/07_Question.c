// WAP to convert a character from lowercase to uppercase and vice versa

#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter the Character : ");
    scanf(" %c", &ch);

    printf("Before change : %c\n", ch);
    ch = toupper(ch);
    printf("After change : %c\n", ch);

    return 0;
}
