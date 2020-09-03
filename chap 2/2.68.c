#include <stdio.h>
#include <limits.h>

int lower_one_mask(int n)
{
    int w = sizeof(int) << 3;
    return (UINT_MAX >> (w - n)) & (!n - 1);
}

int main(int argc, char *argv[])
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        printf("%.8x\n", lower_one_mask(n));
    }
    return 0;
}
