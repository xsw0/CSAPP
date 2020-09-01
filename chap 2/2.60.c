#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b)
{
    return (~(0xff << i * 8) & x) | (b << (i * 8));
}

int main(int argc, char *argv[])
{
    printf("%.8x\n", replace_byte(0x12345678, 2, 0xAB));
    printf("%.8x\n", replace_byte(0x12345678, 0, 0xAB));
    return 0;
}
