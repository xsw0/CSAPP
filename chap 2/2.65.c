#include <stdio.h>
#include <limits.h>

int odd_ones(unsigned x)
{
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    return x & 1;
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
