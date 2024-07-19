#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>
int main()
{
    int x, y;
    int b[100];
    int i, j = 0, s, t, r;
    double a;
    float d, h, f = 0;
    char yes;
    do
    {
        printf("\n\n\t*******BASE CONVERTER CALCULATOR*******\n\n");
        printf("\n\tNUMBER SYSTEM\t\tBASE");
        printf("\n\t____________\t ________\n");
        printf("\n\t1) DECIMAL -\t\t10\n\t2) BINARY -\t\t2\n\t3) HEXADECIMAL -\t16\n\t4) OCTAL -\t\t8 ");
        printf("\n\n\tEnter Base of your number: ");
        scanf("%d", &x);
        printf("\n\tEnter Base in which you want to convert: ");
        scanf("%d", &y);
        printf("\n\t -------ENTER DATA-------");
        // 1. decimal to binary
        if (x == 10 && y == 2)
        {
            printf("\n\n\tEnter Decimal number : ");
            scanf("%lf", &a);
            s = a;
            d = a - s;
            for (i = 0; s > 0; i++)
            {
                b[i] = s % 2;
                s = s / 2;
            }
            printf("\n\tBinary number: ");
            Beep(100, 1000);
            for (j = i - 1; j >= 0; j--)
            {
                printf("%d", b[j]);
            }
            if (d != 0.00)
            {
                printf(".");
                for (j = 0; j <= 5; j++)
                {
                    h = d * 2;
                    t = h;
                    printf("%d", t);
                    d = h - t;
                }
            }
        }
        // 2. decimal to octal
        else if (x == 10 && y == 8)
        {
            printf("\n\n\tEnter Decimal number: ");
            scanf("%lf", &a);
            s = a;
            d = a - s;
            for (i = 0; s > 0; i++)
            {
                b[i] = s % 8;
                s = s / 8;
            }
            printf("\n\tOctal number: ");
            Beep(100, 1000);
            for (j = i - 1; j >= 0; j--)
            {
                printf("%o", b[j]);
            }
            if (d != 0.00)
            {
                printf(".");
                for (j = 0; j <= 5; j++)
                {
                    h = d * 8;
                    t = h;
                    printf("%o", t);
                    d = h - t;
                }
            }
        }
        // 3.decimal to hexadecimal
        else if (x == 10 && y == 16)
        {
            printf("\n\n\tEnter Decimal number: ");
            scanf("%lf", &a);
            s = a;
            d = a - s;
            for (i = 0; s > 0; i++)
            {
                b[i] = s % 16;
                s = s / 16;
            }
            printf("\n\tHexadecimal number: ");
            Beep(100, 1000);
            for (j = i - 1; j >= 0; j--)
            {
                printf("%X", b[j]);
            }
            if (d != 0.00)
            {
                printf(".");
                for (j = 0; j <= 5; j++)
                {
                    h = d * 16;
                    t = h;
                    printf("%X", t);
                    d = h - t;
                }
            }
        }
        // 4.Binary to decimal
        else if (x == 2 && y == 10)
        {
            printf("\n\tEnter Binary number: ");
            scanf("%lf", &a);
            s = a;
            float no = 0;
            int count = 0;
            y = 0;
            f = a - s;
            no = f;
            while (no != ((int)no))
            {
                count++;
                no = no * 10;
            }
            for (i = 0; s > 0; i++)
            {
                r = s % 10;
                y = y + pow(x, i) * r;
                s = s / 10;
            }
            Beep(100, 1000);
            printf("\n\tDecimal number: %d", y);
            if (f != 0.00)
            {
                if (count == 1)
                {
                    t = f * 10;
                    d = d + pow(x, -1) * t;
                    printf(".");
                    y = d * 100;
                    printf("%d", y);
                }
                else if (count == 2)
                {
                    t = f * 100;
                    printf(".");
                    for (i = -2; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                    y = d * 1000;
                    printf("%d", y);
                }
                else if (count == 3)
                {
                    t = f * 1000;
                    printf(".");
                    for (i = -3; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                    y = d * 10000;
                    printf("%d", y);
                }
                else if (count == 4)
                {
                    t = f * 10000;
                    printf(".");
                    for (i = -4; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                    y = d * 100000;
                    printf("%d", y);
                }
                else if (count == 5)
                {
                    t = f * 100000;
                    printf(".");
                    for (i = -5; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                    y = d * 1000000;
                    printf("%d", y);
                }
                else
                {
                    t = f * 1000000;
                    printf(".");
                    for (i = -6; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                    y = d * 10000000;
                    printf("%d", y);
                }
            }
        }
        // 5).Octal to decimal
        else if (x == 8 && y == 10)
        {
            printf("\n\tEnter Octal number: ");
            scanf("%lf", &a);
            s = a;
            float no = 0;
            int count = 0;
            y = 0;
            f = a - s;
            no = f;
            while (no != ((int)no))
            {
                count++;
                no = no * 10;
            }
            for (i = 0; s > 0; i++)
            {
                r = s % 10;
                y = y + pow(x, i) * r;
                s = s / 10;
            }
            Beep(100, 1000);
            printf("\n\tDecimal number: %d", y);
            if (f != 0.00)
            {
                if (count == 1)
                {
                    t = f * 10;
                    d = d + pow(x, -1) * t;
                    printf(".");
                    y = d * 100;
                    printf("%d", y);
                }
                else if (count == 2)
                {
                    t = f * 100;
                    printf(".");
                    for (i = -2; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                    y = d * 1000;
                    printf("%d", y);
                }
                else if (count == 3)
                {
                    t = f * 1000;
                    printf(".");
                    for (i = -3; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                    y = d * 10000;
                    printf("%d", y);
                }
                else if (count == 4)
                {
                    t = f * 10000;
                    printf(".");
                    for (i = -4; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                    y = d * 100000;
                    printf("%d", y);
                }
                else if (count == 5)
                {
                    t = f * 100000;
                    printf(".");
                    for (i = -5; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                    y = d * 1000000;
                    printf("%d", y);
                }
                else
                {
                    t = f * 1000000;
                    printf(".");
                    for (i = -6; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                    y = d * 10000000;
                    printf("%d", y);
                }
            }
        }
        // 6).Binary to Octal
        else if (x == 2 && y == 8)
        {
            printf("\n\tEnter Binary number: ");
            scanf("%lf", &a);
            s = a;
            float no = 0;
            int count = 0, k = 0;
            y = 0;
            f = a - s;
            no = f;
            while (no != ((int)no))
            {
                count++;
                no = no * 10;
            }
            for (i = 0; s > 0; i++)
            {
                r = s % 10;
                y = y + pow(x, i) * r;
                s = s / 10;
            }
            if (f != 0.00)
            {
                if (count == 1)
                {
                    t = f * 10;
                    d = d + pow(x, -1) * t;
                    printf(".");
                }
                else if (count == 2)
                {
                    t = f * 100;
                    printf(".");
                    for (i = -2; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else if (count == 3)
                {
                    t = f * 1000;
                    printf(".");
                    for (i = -3; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else if (count == 4)
                {
                    t = f * 10000;
                    printf(".");
                    for (i = -4; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else if (count == 5)
                {
                    t = f * 100000;
                    printf(".");
                    for (i = -5; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else
                {
                    t = f * 1000000;
                    printf(".");
                    for (i = -6; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
            }
            // decimal to octal
            s = 0;
            s = y;
            for (i = 0; s > 0; i++)
            {
                b[i] = s % 8;
                s = s / 8;
            }
            printf("\n\tOctal number: ");
            Beep(100, 1000);
            for (j = i - 1; j >= 0; j--)
            {
                printf("%o", b[j]);
            }
            if (d != 0.00)
            {
                printf(".");
                for (j = 0; j <= 5; j++)
                {
                    h = d * 8;
                    t = h;
                    printf("%o", t);
                    d = h - t;
                }
            }
        }
        // 7) Octal to Binary
        else if (x == 8 && y == 2)
        {
            printf("\n\tEnter Octal number: ");
            scanf("%lf", &a);
            s = a;
            float no = 0;
            int count = 0, k;
            y = 0;
            f = a - s;
            no = f;
            while (no != ((int)no))
            {
                count++;
                no = no * 10;
            }
            for (i = 0; s > 0; i++)
            {
                r = s % 10;
                y = y + pow(x, i) * r;
                s = s / 10;
            }
            if (f != 0.00)
            {
                if (count == 1)
                {
                    t = f * 10;
                    d = d + pow(x, -1) * t;
                    printf(".");
                }
                else if (count == 2)
                {
                    t = f * 100;
                    printf(".");
                    for (i = -2; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else if (count == 3)
                {
                    t = f * 1000;
                    printf(".");
                    for (i = -3; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else if (count == 4)
                {
                    t = f * 10000;
                    printf(".");
                    for (i = -4; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else if (count == 5)
                {
                    t = f * 100000;
                    printf(".");
                    for (i = -5; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else
                {
                    t = f * 1000000;
                    printf(".");
                    for (i = -6; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
            }
            // decimal to binary
            s = 0;
            s = y;
            for (i = 0; s > 0; i++)
            {
                b[i] = s % 2;
                s = s / 2;
            }
            printf("\n\tBinary number: ");
            Beep(100, 1000);
            for (j = i - 1; j >= 0; j--)
            {
                printf("%d", b[j]);
            }
            if (d != 0.00)
            {
                printf(".");
                for (j = 0; j <= 5; j++)
                {
                    h = d * 2;
                    t = h;
                    printf("%d", t);
                    d = h - t;
                }
            }
        }
        // 8).Binary to hexadecimal
        else if (x == 2 && y == 16)
        {
            printf("\n\tEnter Binary number: ");
            scanf("%lf", &a);
            s = a;
            float no = 0;
            int count = 0;
            y = 0;
            f = a - s;
            no = f;
            while (no != ((int)no))
            {
                count++;
                no = no * 10;
            }
            for (i = 0; s > 0; i++)
            {
                r = s % 10;
                y = y + pow(x, i) * r;
                s = s / 10;
            }
            if (f != 0.00)
            {
                if (count == 1)
                {
                    t = f * 10;
                    d = d + pow(x, -1) * t;
                    printf(".");
                }
                else if (count == 2)
                {
                    t = f * 100;
                    printf(".");
                    for (i = -2; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else if (count == 3)
                {
                    t = f * 1000;
                    printf(".");
                    for (i = -3; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else if (count == 4)
                {
                    t = f * 10000;
                    printf(".");
                    for (i = -4; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else if (count == 5)
                {
                    t = f * 100000;
                    printf(".");
                    for (i = -5; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
            }
            // decimal to hexadecimal
            s = 0;
            s = y;
            for (i = 0; s > 0; i++)
            {
                b[i] = s % 16;
                s = s / 16;
            }
            printf("\n\tHexadecimal number: ");
            Beep(100, 1000);
            for (j = i - 1; j >= 0; j--)
            {
                printf("%X", b[j]);
            }
            if (d != 0.00)
            {
                printf(".");
                for (j = 0; j <= 5; j++)
                {
                    h = d * 16;
                    t = h;
                    printf("%X", t);
                    d = h - t;
                }
            }
        }
        // 9).Octal to hexadecimal
        else if (x == 8 && y == 16)
        {
            printf("\n\tEnter Octal number: ");
            scanf("%lf", &a);
            s = a;
            float no = 0;
            int count = 0;
            y = 0;
            f = a - s;
            no = f;
            while (no != ((int)no))
            {
                count++;
                no = no * 10;
            }
            for (i = 0; s > 0; i++)
            {
                r = s % 10;
                y = y + pow(x, i) * r;
                s = s / 10;
            }
            if (f != 0.00)
            {
                if (count == 1)
                {
                    t = f * 10;
                    d = d + pow(x, -1) * t;
                    printf(".");
                }
                else if (count == 2)
                {
                    t = f * 100;
                    printf(".");
                    for (i = -2; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else if (count == 3)
                {
                    t = f * 1000;
                    printf(".");
                    for (i = -3; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else if (count == 4)
                {
                    t = f * 10000;
                    printf(".");
                    for (i = -4; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
                else if (count == 5)
                {
                    t = f * 100000;
                    printf(".");
                    for (i = -5; i <= -1; i++)
                    {
                        r = t % 10;
                        d = d + pow(x, i) * r;
                        t = t / 10;
                    }
                }
            }
            // decimal to hexadecimal
            s = 0;
            s = y;
            for (i = 0; s > 0; i++)
            {
                b[i] = s % 16;
                s = s / 16;
            }
            printf("\n\tHexadecimal number: ");
            Beep(100, 1000);
            for (j = i - 1; j >= 0; j--)
            {
                printf("%X", b[j]);
            }
            if (d != 0.00)
            {
                printf(".");
                for (j = 0; j <= 5; j++)
                {
                    h = d * 16;
                    t = h;
                    printf("%X", t);
                    d = h - t;
                }
            }
        }
        // 10).hexadecimal to decimal
        else if (x == 16 && y == 10)
        {
            int sum = 0, len;
            char hexa[100];
            printf("\n\tEnter Hexadecimal number: ");
            scanf("%s", &hexa);
            len = strlen(hexa);
            for (i = len - 1; i >= 0; i--)
            {
                if (hexa[i] >= '0' && hexa[i] <= '9')
                {
                    sum = sum + (hexa[i] - 48) * pow(16, j);
                    j++;
                }
                else if (hexa[i] >= 'A' && hexa[i] <= 'F')
                {
                    sum = sum + (hexa[i] - 55) * pow(16, j);
                    j++;
                }
                else if (hexa[i] >= 'a' && hexa[i] <= 'f')
                {
                    sum = sum + (hexa[i] - 87) * pow(16, j);
                    j++;
                }
            }
            Beep(100, 1000);
            printf("\n\tDecimal number: %d", sum);
        }
        // 11).hexadecimal to binary
        else if (x == 16 && y == 2)
        {
            int sum = 0, len;
            char hexa[100];
            printf("\n\tEnter Hexadecimal number: ");
            scanf("%s", &hexa);
            len = strlen(hexa);
            for (i = len - 1; i >= 0; i--)
            {
                if (hexa[i] >= '0' && hexa[i] <= '9')
                {
                    sum = sum + (hexa[i] - 48) * pow(16, j);
                    j++;
                }
                else if (hexa[i] >= 'A' && hexa[i] <= 'F')
                {
                    sum = sum + (hexa[i] - 55) * pow(16, j);
                    j++;
                }
                else if (hexa[i] >= 'a' && hexa[i] <= 'f')
                {
                    sum = sum + (hexa[i] - 87) * pow(16, j);
                    j++;
                }
            }
            for (i = 0; sum > 0; i++)
            {
                b[i] = sum % 2;
                sum = sum / 2;
            }
            printf("\n\tBinary number: ");
            Beep(100, 1000);
            for (j = i - 1; j >= 0; j--)
            {
                printf("%d", b[j]);
            }
        }
        // 12).Hexadecimal to octal
        else if (x == 16 && y == 8)
        {
            int sum = 0, len;
            char hexa[100];
            printf("\n\tEnter Hexadecimal number: ");
            scanf("%s", &hexa);
            len = strlen(hexa);
            for (i = len - 1; i >= 0; i--)
            {
                if (hexa[i] >= '0' && hexa[i] <= '9')
                {
                    sum = sum + (hexa[i] - 48) * pow(16, j);
                    j++;
                }
                else if (hexa[i] >= 'A' && hexa[i] <= 'F')
                {
                    sum = sum + (hexa[i] - 55) * pow(16, j);
                    j++;
                }
                else if (hexa[i] >= 'a' && hexa[i] <= 'f')
                {
                    sum = sum + (hexa[i] - 87) * pow(16, j);
                    j++;
                }
            }
            for (i = 0; sum > 0; i++)
            {
                b[i] = sum % 8;
                sum = sum / 8;
            }
            printf("\n\tOctal number: ");
            Beep(100, 1000);
            for (j = i - 1; j >= 0; j--)
            {
                printf("%o", b[j]);
            }
        }
        printf("\n\n\tYou want to continue then Press 'Y'=yes or 'N'=no: ");
        scanf(" %c", &yes);
        printf("\n------------------------THANK YOU------------------------------");
        printf("\n\n");
    } while (yes == 'y' || yes == 'Y');
    return 0;
}
