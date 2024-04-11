/*  Write program to print the following series
        3  6  11  18  27  38  51  66  83  102   
*/

#include <stdio.h>
int main() {
    int result = 3;
    int diff = 3;
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d  ", result);
        result = result + diff;
        diff += 2;
    }

    return 0;
}