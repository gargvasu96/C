#include <stdio.h>

void linear_search(int A[],int item,int n)
{
   int c,count=0;
   for ( c = 0 ; c < n ; c++ )
   {
      if ( A[c] == item )
      {
         printf("%d is present at location %d.\n", item, c+1);
	     count++;
      }
   }
   if ( count == 0 )
      printf("%d is not present in array.\n", item);
   else
      printf("%d is present %d times in array.\n", item, count);
}


void main()
{
    int item,n,i,A[1000];
    printf("ENTER THE LIMIT OF THE ARRAY");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS OF THE ARRAY\n");
    for (i=0;i<n;i++)
        scanf("%d\n",A[i]);
    printf("ENTER THE NUMBER TO BE SEARCHED");
    scanf("%d",&item);
    linear_search(A,item,n);
}

