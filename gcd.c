#include<stdio.h>

int gcd(int num1,int num2)
{
    int temp;
    temp=num1%num2;
    if (temp==0)
        return num2;
    else
        gcd(num2,temp);
}
void main()
{
    int num1,num2,x;
    printf("ENTER THE NUMBERS");
    scanf("%d %d",&num1,&num2);
    if (num1>num2)
        x=gcd(num1,num2);
    else
        x=gcd(num2,num1);

    printf("THE GREATEST COMMON DEVISOR OF THE %d & %d IS %d",num1,num2,x);
}
