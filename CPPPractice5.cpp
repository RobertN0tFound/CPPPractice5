//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
    unsigned short c;
    unsigned short e;
    unsigned short i;
    unsigned short p;
    unsigned short k;
    unsigned short y = 0;
    char x[5];

    setlocale(LC_ALL, "Russian");
    while (1)
    {
        printf("\n\nУпаковка слова состояния программы: 'p'\n");
        printf("Распаковка слова состояния программы: 'u'\n");
        printf("Для выхода из программы нажмите: 'q'\n");
        printf("Введите код операции из списка выше >> ");
        scanf_s("%s", &x, 5);
        switch (x[0])
        {
        case 'p':
        {
            printf("Введите маску канала (0-3) >> ");
            scanf_s("%hu", &c);
            printf("Введите маску внешнего прерывания (0-1) >> ");
            scanf_s("%hu", &e);
            printf("Введите маску внутреннего прерывания (0-1) >> ");
            scanf_s("%hu", &i);
            printf("Введите маску программного прерывания (0-1) >> ");
            scanf_s("%hu", &p);
            printf("Введите ключ защиты памяти (0-7) >> ");
            scanf_s("%hu", &k);
            y = (c & 0x3) << 12;
            y |= (e & 0x1) << 11;
            y |= (i & 0x1) << 10;
            y |= (p & 0x1) << 9;
            y |= (k & 0x7) << 3;
            printf("\nСлово состояния (dec) >> %hu || Слово состояния (hex) >> %hx", y, y);
            break;
        }
        case 'u':
        {
            printf("Введите '0' для HEX/любое другое число для DEC >> ");
            scanf_s("%hu", &y);
            if (y == 0)
            {
                printf("Введите слово состояния в шестнадцатеричной системе счисления >> ");
                scanf_s("%hx", &y);
                c = (y >> 12) & 0x3;
                e = (y >> 11) & 0x1;
                i = (y >> 10) & 0x1;
                p = (y >> 9) & 0x1;
                k = (y >> 3) & 0x7;
                printf("\nМаска канала = %d\n", c);
                printf("Маска внешнего прерывания = %d\n", e);
                printf("Маска внутреннего прерывания = %d\n", i);
                printf("Маска программного прерывания = %d\n", p);
                printf("Ключ защиты памяти = %d\n", k);
            }
            else
            {
                c = (y >> 12) & 0x3;
                e = (y >> 11) & 0x1;
                i = (y >> 10) & 0x1;
                p = (y >> 9) & 0x1;
                k = (y >> 3) & 0x7;
                printf("\ny=%x y=%d\n", y, y);
                printf("\nМаска канала = %d\n", c);
                printf("Маска внешнего прерывания = %d\n", e);
                printf("Маска внутреннего прерывания = %d\n", i);
                printf("Маска программного прерывания = %d\n", p);
                printf("Ключ защиты памяти = %d\n", k);
            }
            break;
        }
        case 'q':
        {
            return 0;
        }
        }
    }
}
/*
2
0
1
0
6
hex = 2340;
Распаковка неправильная из-за системной ошибки перевода введенного значения в hex;
*/