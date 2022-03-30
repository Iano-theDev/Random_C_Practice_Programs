#include <stdio.h>

int main(void)
{
    int a, b;

    a = 48;
    b = 49;

    for (a=48; a<57; a++)
    {
        if (a != b && a < b)
        {
            for (b=49; b<58; b++)
            {
                if (b != a && b > a)
                {
                    putchar(a);
                    putchar(b);
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
}
