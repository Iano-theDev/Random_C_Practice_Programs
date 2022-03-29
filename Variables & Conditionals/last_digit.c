#include <stdio.h>

int main(void)
{
    int num, last;

    printf("enter a number \n", num);
    scanf("%i", &num);

    last = num%10;

    printf("The last digit of the number %i is %i \n", num, last);
    return (0);
}
