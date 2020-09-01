#include <stdio.h>
#include <stdint.h>

uint32_t leastByteX(uint32_t x, uint32_t y)
{
    return (0xff & x) | (~0xff & y);
}

int main(int argc, char *argv[])
{
    printf("%.8x\n", leastByteX(0x89ABCDEF, 0x76543210));
    return 0;
}
