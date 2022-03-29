#include <stdio.h>

int main(void)
{
    char c;

    c = 'a';

    for (; c <= 'z'; c++)
    if (c != 'e' && c!= 'q')
    {
        putchar(c);
    }
}
