#include <stdio.h>

int main(void)
{
    int i, j, mul;

    printf("enter a number: ");
    scanf("%d", &j);

    for (i=1; i<=20; i++)
    {
        mul = i*j;
        printf("%d x %d = %d \n", j, i, mul);
    }
    return(0);

}
