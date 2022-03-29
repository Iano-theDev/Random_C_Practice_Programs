#include <stdio.h>

int main(void)
{
    int age;

    printf("enter your age: ");
    scanf("%u", &age);

    if(age>=120)
        printf("You cant be that old, or are you Kane Tananka?");
    else if (age >= 18)
        printf("Congratulations! Exercise your voters right responsibly...You can vote");
    else if (age >= 8 && age <= 17)
        printf("You must wait a few more year to be eligible for voting");
    else if (age == 0)
        printf("How are you using this computer, you are not born yet!!!");
    else
        printf("You are way too young");
    return (0);
}
