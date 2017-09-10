#include<stdio.h>

int binary(int A[],int item,int first,int last)
{
    int mid;
    if (first<last)
    {
        mid=(first+last)/2;
        if (A[mid]==item)
            return mid;
        else if(A[mid]<item)
            binary(A,item,mid+1,last);
        else
            binary(A,item,0,mid-1);
    }
    else
        return -1;


}

int main()
{
    int item,result,last,i,A[10];
    printf("ENTER THE LIMIT OF THE ARRAY");
    scanf("%d",&last);
    printf("ENTER THE ELEMENTS OF THE ARRAY\n");
    for (i=0;i<last;i++)
        scanf("%d",&A[i]);
    printf("ENTER THE NUMBER TO BE SEARCHED");
    scanf("%d",&item);
    result = binary(A,item,0,last);
    if (result == -1)
         printf("NUMBER IS NOT PRESENT IN THE LIST");
    else
         printf("%d IS AT %d",item,result);
return 0;
}
