#include <stdio.h>
#include <stdlib.h>

//github : alisharifyy :)

//function prototype
long factorial(long number);

int main(void)
{

    printf("\n[Github] : alisharifyy\n");
    printf("[HELLO]\nThis is factorial\n\n");

    //Get input From user
    long number = 0;
    printf("Enter Your Number:");
    scanf("%li",&number);

    //check for positive number 
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
    //safety check 
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
//baba booey
