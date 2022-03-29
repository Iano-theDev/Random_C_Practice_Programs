#include <stdio.h>

int main(void)
{
    int n;

    printf("enter an integer: ");
    scanf("%i", &n);

    if ( n%2 == 0)
        printf("%i is an even number \n", n);
    else if (n == 0)
        printf("%i is zero", n);
    else
        printf("%i is an odd number \n", n);
    return (0);
}
