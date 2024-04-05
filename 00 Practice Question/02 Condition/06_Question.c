// WAP to check that the given character is a vowel or consonant

#include <stdio.h>
int main() {
    char ch;
    printf("Enter the Character : ");
    scanf(" %c", &ch);

    // Checking if the character is a vowel
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' ||
       ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        printf("Character is a Vowel\n");
    } else {
        printf("Character is a Consonant\n");
    }

    return 0;
}

