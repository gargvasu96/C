#include <stdio.h>
void merge_sort(int arr[],int first,int last);
void merge(int arr[],int first,int mid,int last);
int main()
{
  int arr[100];
  int i,size;
  printf("Enter total no. of elements : ");
  scanf("%d",&size);
  printf("ENTER THE ELEMENTS\n" );
  for(i=0; i<size; i++)
    scanf("%d",&arr[i]);
  merge_sort(arr,0,size-1);
  for(i=0; i<size; i++)
  printf("%d ",arr[i]);
  return 0;
}

void merge_sort(int arr[],int first,int last)
{
    int mid,n1,n2;
  if (first<last);
  {
    mid = (first+last)/2;
    merge_sort(arr,first,mid);
    merge_sort(arr,mid+1,last);
    merge(arr,first,mid,last);
  }
}

void merge(int arr[],int first,int mid,int last)
{
  int i,j,k;
  int n1 = mid - first + 1;
  int n2 = last - mid;
  int L[n1+1];
  int R[n2+1];
  for(i=1;i<=n1;i++)
    L[i] = arr[first+i-1];
  for(j=1;i<=n2;i++)
    R[j] = arr[last+j];
  L[n1+1]=65535;
  R[n2+1]=65535;
  i=j=1;
  for (k=first;k<=last;k++)
  {
    if (L[i]<R[j])
    {
      i++;
      arr[k]=L[i];
    }
    else
    {
      j++;
      arr[k]=R[j];
    }
  }
}
