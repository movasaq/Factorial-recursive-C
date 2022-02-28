#include <stdio.h>
#include <stdlib.h>

//github : alisharifyy :)

//function prototype
long factorial(long number);

int main(void)
{

    long number = 0;
    printf("\n[Github] : alisharifyy\n");
    printf("[HELLO]\nThis is factorial\n\n");

    //Get input From user
    printf("Enter Your Number:");
    scanf("%li",&number);

    //check for possitive number
    if (number == 0 || number < 0)
    {
        printf("invalid input\n");
        return 2;
    }

    long fac = factorial(number);
    printf("Factorial is [%li]\n",fac);
    return 0;
}

long factorial(long number)
{
    //safety check For infinity loop
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

