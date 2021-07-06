#include<stdio.h>
#include<limits.h>

void charV();
void shortV();
void intV();
void unCharV();
void unShortV();
void unIntV();

int main(void) {
        charV();
        shortV();
        intV();
        unCharV();
        unShortV();
        unIntV();
}

void charV() {
        char min = 1;
        char max = 0;
        while(min>0) {
                min++;
                max++;
        }
        printf("\nChar:\n");
        printf("Min-Wert: %d\n", min);
        printf("Max-Wert: %d\n", max);
        printf("limit.h:\n");
        printf("Min-Wert: %d\n", CHAR_MIN);
        printf("Max-Wert: %d\n", CHAR_MAX);
}

void shortV() {
        short min = 1;
        short max = 0;
        while(min>0) {
                min++;
                max++;
        }
        printf("\nShort:\n");
        printf("Min-Wert: %d\n", min);
        printf("Max-Wert: %d\n", max);
        printf("limit.h:\n");
        printf("Min-Wert: %d\n", SHRT_MIN);
        printf("Max-Wert: %d\n", SHRT_MAX);
}

void intV() {
        int min = 1;
        int max = 0;
        while(min>0) {
                min++;
                max++;
        }
        printf("\nInt:\n");
        printf("Min-Wert: %d\n", min);
        printf("Max-Wert: %d\n", max);
        printf("limit.h:\n");
        printf("Min-Wert: %d\n", INT_MIN);
        printf("Max-Wert: %d\n", INT_MAX);
}

void unCharV() {
        unsigned char min = 1;
        unsigned char max = 0;
        while(min>0) {
                min++;
                max++;
        }
        printf("\nUnsigned Char:\n");
        printf("Min-Wert: %d\n", min);
        printf("Max-Wert: %d\n", max);
        printf("limit.h:\n");
        printf("Min-Wert: %s\n", "nicht definiert");
        printf("Max-Wert: %d\n", UCHAR_MAX);
}

void unShortV() {
        unsigned short min = 1;
        unsigned short max = 0;
        while(min>0) {
                min++;
                max++;
        }
        printf("\nUnsigned Short:\n");
        printf("Min-Wert: %d\n", min);
        printf("Max-Wert: %d\n", max);
        printf("limit.h:\n");
        printf("Min-Wert: %s\n", "nicht definiert");
        printf("Max-Wert: %d\n", USHRT_MAX);
}

void unIntV() {
        unsigned int min = 1;
        unsigned int max = 0;
        while(min>0) {
                min++;
                max++;
        }
        printf("\nUnsigned Int:\n");
        printf("Min-Wert: %ld\n", min);
        printf("Max-Wert: %ld\n", max);
        printf("limit.h:\n");
        printf("Min-Wert: %s\n", "nicht definiert");
        printf("Max-Wert: %ld\n", UINT_MAX);
}