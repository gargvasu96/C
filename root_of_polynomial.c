#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c;
float z,d,g,root1,root2,s,m;
printf("Enter the value of a,b&c\n");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
g=sqrt(d);
if (d==0)
 {printf("The Roots are same\n");
  root1=(-b+g)/(2*a);
  root2=(-b-g)/(2*a);
 printf("The roots are%f %f\n",root1,root2);}
else if(d>0)
{ printf("the both roots will be distinct\n");
 root1=(-b+g)/(2*a);
 root2=(-b-g)/(2*a);
 printf("The roots are%f & %f",root1,root2); }
else
{ printf("The roots are imaginary\n");
 s=((-b)/(2*a));
 z=fabs(d);
 g=sqrt(z);
 m=g/(2*a);
 printf("The roots are %f+i%f\n",s,m);
 printf("The roots are %f-i%f",s,m); }
return 0;
}
