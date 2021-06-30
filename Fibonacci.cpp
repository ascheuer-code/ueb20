// Fibonacci.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <math.h>

int main()
{
    int n;
    double fib = 1;
    double goldeneZahl = 1.6180339887;
    printf("Wert angeben");
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0) {
            printf("%d %s\n", i, "0");
            continue;
        }
        if (i == 1) {
            printf("%d %s\n", i, "1");
            continue;
        }
        if (i == 2) {
            printf("%d %s\n", i, "1");
            continue;
        }
        else {
            printf("%d %.lf\n", i, round(fib * goldeneZahl));
            fib = round(fib * goldeneZahl);
        }
    }
    scanf_s("%d", &n);
}