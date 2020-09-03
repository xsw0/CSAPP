#include <stdio.h>
#include <limits.h>

int any_odd_one(unsigned x)
{
    return !(~x & 0xAAAAAAAA);
}

int main(int argc, char *argv[])
{
    int x;
    while (scanf("%x", &x) != EOF)
    {
        printf("%x\n", any_odd_one(x));
    }
    return 0;
}
