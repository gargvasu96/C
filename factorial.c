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
    int i=number,result=1;
    while(i!=1)
    {
        result = result*i;
        i--;
    }
}
