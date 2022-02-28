#include <stdio.h>

//github : alisharifyy :)

//function prototype
void factorial(long number,int fac);

int main(void)
{

    long number = 0;
    printf("\n[Github] : alisharifyy\n");
    printf("[HELLO]\nThis is factorial\n\n");

    //Get input From user
    printf("Enter Your Number:");
    scanf("%li",&number);

    int fac = number;
    factorial(number,fac);
    return 0;
}

void factorial(long number,int fac)
{
    //safety check For infinity loop
    if (fac <= 1)
    {
        printf("Factorial is : %li \n",number);
        return ;
    }
    fac -= 1;
    number = number * fac;
    factorial(number,fac);
}

