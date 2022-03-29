#include <stdio.h>

int main(void)
{
    int n;

    printf("enter an integer and i'll tell you if it's positive or negative: \n");
    scanf("%i", &n);
    if (n > 0)
        printf("%i is a positive integer \n", n);
    else if (n == 0)
        printf("%i is zero \n");
    else
        printf("%i is a negative integer \n", n);

    return (0);
}
