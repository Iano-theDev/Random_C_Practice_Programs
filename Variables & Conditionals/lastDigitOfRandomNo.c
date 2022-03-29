#include <stdio.h>

int main(void)
{
    int num, first;

    printf("Enter a random number: \n", num);
    scanf("%i", &num);

    first = num;
        while (first >= 10)
        {
            first /= 10;
        }
            printf("the first digit is: %i", first);
    return (0);
}
