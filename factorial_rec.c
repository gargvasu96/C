
#include<stdio.h>

int factorial(int);

void main()
{
    int number,result;
    scanf("%d",&number);
    result=factorial(number);
    printf("THE RESULT IS %d",result);
}

int factorial(int number)
{
    if (number<0)
        printf("INVALID NUMBER");
    else if (number<2)
        return 1;
    else
        return number*factorial(number-1);
}
