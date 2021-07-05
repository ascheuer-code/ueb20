#include <stdio.h>
#include <limits.h>

int main()
{
    int digitInteger;

    printf("Min: char =  %d\n", CHAR_MIN);
    printf("Max: char =  %d\n", CHAR_MAX);

    printf("Min: short =  %d\n", SHRT_MIN);
    printf("Max: short =  %d\n", SHRT_MAX);

    printf("Min: int =  %d\n", INT_MIN);
    printf("Max: int =  %d\n", INT_MAX);

    printf("Min: unsigned char =  %s\n", "nicht definiert");
    printf("Max: unsigned char =  %u\n", UCHAR_MAX);

    printf("Min: unsigned short =  %s\n", "nicht definiert");
    printf("Max: unsigned short =  %u\n", USHRT_MAX);

    printf("Min: unsigned int =  %s\n", "nicht definiert");
    printf("Max: unsigned int =  %u\n", UINT_MAX);

    printf("\nWerte der Bibliotheke:");

    printf("#define SCHAR_MIN   (-128)\n");
    printf("#define SCHAR_MAX     127\n");

    printf("#define SHRT_MIN    (-32768)\n");
    printf("#define SHRT_MAX      32767\n");

    printf("#define INT_MIN     (-2147483647 - 1) \n");
    printf("#define INT_MAX       2147483647\n");

    printf("nicht definiert\n");
    printf("#define UCHAR_MAX     0xff\n");

    printf("nicht definiert\n");
    printf("#define USHRT_MAX     0xffff\n");

    printf("nicht definiert\n");
    printf("#define UINT_MAX      0xffffffff\n");
}
