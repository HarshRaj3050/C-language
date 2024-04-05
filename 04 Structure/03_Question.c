/* Write a function sumvector which returns the sum of two vectors passed to it.
   The bectors must be two-dimensional. */

#include <stdio.h>
typedef struct vector
{
    int x;
    int y;
} vector;

vector sumvector(vector v1, vector v2)
{
    vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

int main()
{
    vector v1, v2, sum;
    v1.x = 56;
    v1.y = 63;
    printf("X dimension is : %d, Y dimension is : %d\n", v1.x, v1.y);
    v2.x = 76;
    v2.y = 33;
    printf("X dimension is : %d, Y dimension is : %d\n\n", v2.x, v2.y);

    sum = sumvector(v1, v2);
    printf("The sum of X vector is : %d, and sum of Y vector is : %d", sum.x, sum.y);
    return 0;
}