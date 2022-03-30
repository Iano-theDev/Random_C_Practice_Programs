#include <stdio.h>

int main(void)
{
    int a, b, c;

    a = 48;
    b = 49;
    c = 50;

    for (a = 48; a < 56; a++)
    {
        if (b != a && b > a)
        {
            for(b = 49; b < 57; b++)
            {
                if (c != b && c > b)
                    for (c = 50; c < 58; c++)
                    {
                        if (b != a && b != c && a != c && a < b && a < c && b < c)
                        {
                            putchar(a);
                            putchar(b);
                            putchar(c);
                            putchar(',');
                            putchar(' ');
                        }
                    }
            }
        }
    }
    return (0);
}
