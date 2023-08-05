// Create a two dimensional vector using structure in C.

#include <stdio.h>
struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 56;
    v1.y = 63;
    printf("X dimension is : %d, Y dimension is : %d\n", v1.x, v1.y);
    v2.x = 76;
    v2.y = 33;
    printf("X dimension is : %d, Y dimension is : %d", v2.x, v2.y);

    return 0;
}