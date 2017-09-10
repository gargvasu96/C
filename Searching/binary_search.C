#include <stdio.h>
#include <conio.h>
#define size 6

int main()
{
    int i,lb,ub,mid,item,array[size];

printf("ENTER THE NUMBERS \n");
    for (i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("ENTER THE VLAUE TO BE SEARCHED\n");
    scanf("%d",&item);

    lb = 0;
    ub = size - 1;
    mid = (lb+ub)/2;

    while(lb<=ub)
    {
        if (array[mid]<item)
            lb=mid+1;
        else if(array[mid]==item)
        {
            printf("%d FOUND AT %d LOCATION.\n", item, mid+1);
            break;
        }
        else
        {
            ub=mid-1;
        }

        mid=(lb+ub)/2;
    }
    if (lb>ub)
    {
        printf("NOT FOUND!! %d IS NOT FOUND IN THE ARRAY\n", item);
    }

    return 0;
}
