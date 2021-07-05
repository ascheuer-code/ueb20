#include <stdio.h>

int square(int x)
{
    x = x * x;
}

int main(void)
{

    int val = 5;
    int currentState = 5;

    square(val);

    printf("The value is %d before the function call and %d after\n", currentState, val);
}
