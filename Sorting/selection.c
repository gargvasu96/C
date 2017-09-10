#include<stdio.h>
#include<conio.h>
#include<math.h>
#define size 6
int main()
{
 int temp,Arr[size],i,j;
// clrscr();
 printf("\t\t\t\tSELECTION SORT\n\n");
 for (i=0;i<size;i++)
 {
  printf("Enter the value of element %d\n",i);
  scanf("%d",&Arr[i]);
 }
 for (i=0;i<(size-1);i++)
 {
 for(j=(i+1);j<size;j++)
  {
  if (Arr[i]>Arr[j])
   {
   temp = Arr[i];
   Arr[i] = Arr[j];
   Arr[j] = temp;
   }
  }
 }
 printf("The Sorted Array is\n");
 for (i=0;i<size;i++)
 {
  printf("%d\t",Arr[i]);
 }
 return 0;
}
