#include <stdio.h>
#include <limits.h>

int anyBitOfXEquals1(int x)
{
    return !(x + 1);
}

int anyBitOfXEquals0(int x)
{
    return !x;
}

int anyBitInTheLSBOfXEquals1(int x)
{
    return !!(((x & 0xFF) + 1) & 0x100);
}

int anyBitInTheMSBOfXEquals0(int x)
{
    return !(x & ~((int)(UINT_MAX >> 8)));
}

int main(int argc, char *argv[])
{
    int x;
    while (scanf("%x", &x) != EOF)
    {
        printf("anyBitOfXEquals1\t\t:\t%x\n", anyBitOfXEquals1(x));
        printf("anyBitOfXEquals0\t\t:\t%x\n", anyBitOfXEquals0(x));
        printf("anyBitInTheLSBOfXEquals1\t:\t%x\n", anyBitInTheLSBOfXEquals1(x));
        printf("anyBitInTheMSBOfXEquals0\t:\t%x\n", anyBitInTheMSBOfXEquals0(x));
    }
    return 0;
}
