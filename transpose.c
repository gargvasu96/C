#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c,M[3][3],T[3][3];
//clrscr();
printf("\t\t\t\Transpose of two 2D Matrix\n\n");
printf("Enter the elements of the matrix\n");
for (a=0;a<3;a++)
{
for (b=0;b<3;b++)
{
printf("x[%d][%d]=",a,b);
scanf("%d",&M[a][b]);
printf("\n");
 }
 }

for (a=0;a<3;a++)
{
for (b=0;b<3;b++)
T[a][b]=M[b][a];
}
printf("First array\n");
for (a=0;a<3;a++)
{
for (b=0;b<3;b++)
printf("%d\t",M[a][b]);
printf("\n");
}

printf("The Transpose of Entered Matrix is\n");
for (a=0;a<3;a++)
{
for (b=0;b<3;b++)
printf("%d\t",T[a][b]);
printf("\n");
}
//getch();
return 0;
}
