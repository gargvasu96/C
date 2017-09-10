#include<stdio.h>

void rec_insert(int ,int []);
int main(void)
{
  int a[100],i,count;

  printf("Enter number of elements:");
  scanf("%d",&count);
  printf("\nEnter elements of array:");

  for(i=0;i<count;i++)
   scanf("%d",&a[i]);

  rec_insert(count-1,a);
  printf("\nSorted array:");
  for(i=0;i<count;i++)
    printf("%d ",a[i]);

}
void rec_insert(int i,int a[])
{
  int j,temp;

  if(i>0)
   {
    rec_insert(i-1,a);
    temp=a[i];
    j=i-1;
       while(a[j]>temp&&j>=0)
	{
	  a[j+1]=a[j];
	  j--;
	}
    a[j+1]=temp;
    }
}
