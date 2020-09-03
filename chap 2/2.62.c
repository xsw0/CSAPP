#include <stdio.h>
#include <limits.h>

int int_shifts_are_arithmetic()
{
    return !!((-1 >> 1) & (1 << ((sizeof(int) << 3) - 1)));
}

int main(int argc, char *argv[])
{
    printf("%x\n", int_shifts_are_arithmetic());
    return 0;
}
