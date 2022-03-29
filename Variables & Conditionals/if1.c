#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("enter the first number: ");
    scanf("%i", &num1);
    printf("\n");
    printf("enter the second number: ");
    scanf("%i", &num2);
    printf("\n");

    if(num1 == num2)
        printf("%i and %i are equal", num1, num2);
    else
        printf("%i and %i are not equal", num1, num2);
    return (0);
}

