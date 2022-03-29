#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter x co-ordinate: ");
    scanf("%d", &x);
    printf("Enter y co-ordinate: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("The co-ordinate (%d,%d) is in the first Quadrant \n", x, y);
    else if (x < 0 && y > 0)
        printf("The co-ordinate (%d,%d) is in the second Quadrant \n", x, y);
    else if (x < 0 && y < 0)
        printf("The co-ordinate (%d,%d) is in the third Quadrant \n", x, y);
    else if (x > 0 && y < 0)
        printf("The co-ordinate (%d,%d) is in the fourth Quadrant \n", x, y);

    if(x == 0 && y == 0)
        printf("The co-ordinate (%d,%d) is at the center of the graph \n", x, y);
            else if (x == 0)
                printf("The co-ordinate (%d,%d) is in the y-axis \n", x, y);
            else if (y == 0)
                printf("The co-ordinate (%d,%d) is in the x-axis \n", x, y);
    return (0);
}
