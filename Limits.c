#include <stdio.h>
#include <limits.h>

int main()
{
    char a = 0;
    char b = 1;
    while (a > 0)
    {
        a++;
        b++;
    }

    printf("char min %d , char max %d", a, b);

    int c = 0;
    int d = 1;
    while (c > 0)
    {
        c++;
        d++;
    }

    printf("char min %d , char max %d", c, d);

    short e = 0;
    short f = 1;
    while (e > 0)
    {
        e++;
        f++;
    }

    printf("char min %d , char max %d", e, f);

    unsigned char g = 0;
    unsigned char h = 1;
    while (g > 0)
    {
        g++;
        h++;
    }

    printf("char min %d , char max %d", g, h);

    unsigned int i = 0;
    unsigned int j = 1;
    while (i > 0)
    {
        i++;
        j++;
    }

    printf("char min %d , char max %d", i, j);

    unsigned short k = 0;
    unsigned short l = 1;
    while (k > 0)
    {
        k++;
        l++;
    }

    printf("char min %d , char max %d", k, l);

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
}
