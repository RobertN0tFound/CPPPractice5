#include <iostream>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    unsigned short c;
    unsigned short e;
    unsigned short i;
    unsigned short p;
    unsigned short k;
    unsigned short y = 0;
    unsigned short temp;
    printf("Введите маску канала (0-16) >> ");
    scanf_s("%hu", &c);
    printf("Введите маску внешнего прерывания (0-1) >> ");
    scanf_s("%hu", &e);
    printf("Введите маску внутреннего прерывания (0-1) >> ");
    scanf_s("%hu", &i);
    printf("Введите маску программного прерывания (0-1) >> ");
    scanf_s("%hu", &p);
    printf("Введите ключ защиты памяти (0-8) >> ");
    scanf_s("%hu", &k);
    temp = c & 16;
    y = y | (temp << 12);
    temp = e & 1;
    y = y | (temp << 10);
    temp = i & 1;
    y = y | (temp << 11);
    temp = p & 1;
    y = y | (temp << 9);
    temp = k & 8;
    y = y | (temp << 5);
    printf("\npacked value is decimal=%hu hexadecimal=%x", y, y);

    unsigned short x;
    unsigned short c;
    unsigned short e;
    unsigned short i;
    unsigned short p;
    unsigned short k;
    unsigned short y;
    printf("Выберите в каком виде будет введено число (0 - hexadecimal, other - decimal) >> ");
    scanf_s("%hu", &x);
    if (x == 0)
    {
        printf("Введите число в 16-ти системе счисления >> ");
        scanf_s("%hx", &y);
    }
    else
    {
        
    }

}
