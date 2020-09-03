#include <stdio.h>
#include <limits.h>

int leftmost_one(unsigned x)
{
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    return (x >> 1) + (x & 1);
}

int main(int argc, char *argv[])
{
    int x;
    while (scanf("%x", &x) != EOF)
    {
        printf("%x\n", odd_ones(x));
    }
    return 0;
}
