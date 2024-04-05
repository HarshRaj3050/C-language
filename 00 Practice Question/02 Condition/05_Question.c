/* WAP to check whether a student is passed or fail depending upon the makes given of 3 subjects,
    where passing marks are 33 */

#include <stdio.h>

int main() {
    int sub1, sub2, sub3;
    printf("-----Enter the marks between 0 to 100-----\n");
    
    // input for each subject
    printf("First Subject marks : ");
    scanf("%d", &sub1);
    printf("Second Subject marks : ");
    scanf("%d", &sub2);
    printf("Third Subject marks : ");
    scanf("%d", &sub3);

    // Checking if the student has passed in all subjects
    if(33 <= sub1 && 33 <= sub2 && 33 <= sub3) {
        printf("You are PASS\n");
    } else {
        printf("Fail, Try Again\n");
    }

    return 0;
}
