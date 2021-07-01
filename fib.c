#include <stdio.h>

int main()
{
    int n;
    double fib1 = 1;
    double fib2 = 1;
    double fib3 = 2;

    printf("Wert angeben");
    scanf("%d", &n);
    for (int i = 0; i < n + 1; i++)
    {
        if (i == 0)
        {
            printf("%d %s\n", i, "0");
            continue;
        }
        if (i == 1)
        {
            printf("%d %s\n", i, "1");
            continue;
        }
        if (i == 2)

        {
            printf("%d %s\n", i, "1");
            continue;
        }
        else
        {

            fib3 = fib1 + fib2;
            printf("%d %.lf\n", i, fib3);
            fib1 = fib2;
            fib2 = fib3;
        }
    }
}