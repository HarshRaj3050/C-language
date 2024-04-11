/*  Write program to print the following series
        1  4  9  16  25  36  49  81  100 
*/

#include <stdio.h>
int main() {
    int result = 1;
    int diff = 3;
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d  ", result);
        result = result + diff;
        diff += 2;
    }

    return 0;
}
