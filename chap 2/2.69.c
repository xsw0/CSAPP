#include <stdio.h>
#include <limits.h>

unsigned rotate_left(unsigned x, int n)
{
    unsigned w = sizeof(int) << 3;
    return (x << n) | (x >> (w - n));
}

int main(int argc, char *argv[])
{
    int x, n;
    while (scanf("%x %d", &x, &n) != EOF)
    {
        printf("%.8x\n", rotate_left(x, n));
    }
    return 0;
}
