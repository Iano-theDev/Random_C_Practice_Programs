#include <stdio.h>
int main()
{
    int n1, n2, n3;

    printf("Enter the 1st number: ");
    scanf("%i", &n1);
    printf("Enter the 2nd number: ");
    scanf("%i", &n2);
    printf("Enter the 3rd number: ");
    scanf("%i", &n3);

    if (n1 > n2 && n1 > n3)
        printf("%i is greater than %i and %i \n", n1, n2, n3);
    else if (n2 > n1 && n2 > n3)
        printf("%i is greater than %i and %i \n", n2, n1, n3);
    else
        printf("%i is greater than %i and %i \n", n3, n1, n2);
    return (0);
}
