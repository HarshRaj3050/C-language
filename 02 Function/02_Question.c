// Write a program using functions to  print the following pattern (first n lines)
// *
// ***
// *****

#include<stdio.h>
void printpattern(int n);

int main() {
    int n = 3;
    printpattern(n);
    return 0;
}
void printpattern(int n){
    if (n==1) {
        printf("*\n");
        return;
    }
    // (2*n-1) is odd number formula
    printpattern(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}