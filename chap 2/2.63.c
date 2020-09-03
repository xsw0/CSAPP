#include <stdio.h>
#include <limits.h>

unsigned srl(unsigned x, int k)
{
    unsigned xsra = (int)x >> k;
    unsigned w = 8 * sizeof(int);
    unsigned mask = ~(UINT_MAX << (w - k));
    return xsra & mask;
}

int sra(int x, int k)
{
    int xsrl = (unsigned)x >> k;
    int w = 8 * sizeof(int);
    int mask = (UINT_MAX << (w - k)) & (!((1 << (w - 1)) & x) - 1);
    return xsrl | mask;
}

int main(int argc, char *argv[])
{
    int x, k;
    while (scanf("%x %d", &x, &k) != EOF)
    {
        printf("srl\t:\t%.8x\n", srl(x, k));
        printf("sra\t:\t%.8x\n", sra(x, k));
    }
    return 0;
}
