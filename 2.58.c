#include <stdio.h>
#include <stdint.h>

int is_little_endian()
{
    union {
        uint8_t u8;
        uint16_t u16;
        uint32_t u32;
        uint64_t u64;
        float f;
        double d;
    } bits = {.u64 = 0x1};
    return bits.u8 == bits.u16 &&
           bits.u8 == bits.u32 &&
           bits.u8 == bits.u64 &&
           bits.f == 0x1p-149f &&
           bits.d == 0x1p-1074;
}

int main(int argc, char *argv[])
{
    printf("%d\n", is_little_endian());
    return 0;
}
