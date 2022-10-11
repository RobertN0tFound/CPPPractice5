#include <iostream>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned short c;
    unsigned short e;
    unsigned short i;
    unsigned short p;
    unsigned short k;
    unsigned short y = 0;
    printf("Введите маску канала (0-15) >> ");
    scanf_s("%hu", &c);
    printf("Введите маску внешнего прерывания (0-1) >> ");
    scanf_s("%hu", &e);
    printf("Введите маску внутреннего прерывания (0-1) >> ");
    scanf_s("%hu", &i);
    printf("Введите маску программного прерывания (0-1) >> ");
    scanf_s("%hu", &p);
    printf("Введите ключ защиты памяти (0-7) >> ");
    scanf_s("%hu", &k);
    y = c << 12;
    y |= e << 11;
    y |= i << 10;
    y |= p << 9;
    y |= k << 3;
    printf("\npacked value is decimal=%hu hexadecimal=%x", y, y);

    unsigned short c;
    unsigned short e;
    unsigned short i;
    unsigned short p;
    unsigned short k;
    unsigned short y;
    printf("введите слово состояния (0 - шестнадцатеричное) >> ");
    scanf_s("%hu", &y);
    if (y == 0)
    {
        printf("введите слово состояния в шестнадцатеричной системе счисления >> ");
        scanf_s("%hx", &y);
        c = (y >> 12) & 0xf;
        e = (y >> 11) & 0x1;
        i = (y >> 10) & 0x1;
        p = (y >> 9) & 0x1;
        k = (y >> 3) & 0x7;
        printf("\nмаска канала = %d\n", c);
        printf("маска внешнего прерывания = %d\n", e);
        printf("маска внутреннего прерывания = %d\n", i);
        printf("маска программного прерывания = %d\n", p);
        printf("ключ защиты памяти = %d\n", k);
    }
    else
    {
        c = (y >> 12) & 0xf;
        e = (y >> 11) & 0x1;
        i = (y >> 10) & 0x1;
        p = (y >> 9) & 0x1;
        k = (y >> 3) & 0x7;
        printf("\nмаска канала = %d\n", c);
        printf("маска внешнего прерывания = %d\n", e);
        printf("маска внутреннего прерывания = %d\n", i);
        printf("маска программного прерывания = %d\n", p);
        printf("ключ защиты памяти = %d\n", k);
    }
}
