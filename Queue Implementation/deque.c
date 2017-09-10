#include <stdio.h>
#include <stdlib.h>
#define size 10

void insert_at_beginning();
void insert_at_end();
void delete_from_beginning();
void delete_from_end();
void display();
int dq[size],left=-1,right=-1;
int main()
{

    int e,c,i,a;
//clrscr();
printf("\t\t\t\tDEQUE OPERATIONS\n\n");
for (i=0;;i++)
{
 printf("\t1 : INSERTION AT BEGINNING\n");
 printf("\t2 : INSERTION AT END\n");
 printf("\t3 : DELETION FROM BEGINNING\n");
 printf("\t4 : INSERTION FROM END\n");
 printf("\t5 : DISPLAY\n");
 printf("\t6 : EXIT\n");
 printf("\tChoose your Choice\n");
 scanf("%d",&c);
 switch(c)
 {
  case 1:
  {
      insert_at_beginning();
      display();
      break;
  }
  case 2:
  {
      insert_at_end();
      display();
      break;
  }
  case 3:
  {
      delete_from_beginning();
      display();
      break;
  }
  case 4:
  {
   delete_from_end();
   display();
   break;
  }
  case 5:
  {
   display();
   break;
  }
  case 6:
  {
  exit(0);
  }
 }
}
//getch();

    return 0;
}

void insert_at_beginning()
{

    if (left==((right+1)%size))
        {
            printf("OVERFLOW\n");
        }
    else
    {
        int e;
        printf("Enter the value to insert\n");
        scanf("%d",&e);
        if (left==-1)
        {
            left=right=0;
        }
        else
        {
            left=((left-1+size)%size);
        }
        dq[left]=e;
    }
}
void delete_from_beginning()
{

    if (left == -1)
    {
        printf("UNDERFLOW\n\n");
    }
    else
    {
        int e;
        e = dq[left];
        if (left==right)
        {
            left=right=-1;
        }
        else
        {
            left=((left+1)%size);
        }
    }
}

void insert_at_end()
{
   if (left==((right+1)%size))
        {
            printf("OVERFLOW\n");
        }
    else
    {
        int e;
        printf("Enter the value to insert\n");
        scanf("%d",&e);
        if (left==-1)
        {
            left=right=0;
        }
        else
        {
            right=((right+1)%size);
        }
        dq[right]=e;
    }
}

void delete_from_end()
{
      if (left == -1)
    {
        printf("UNDERFLOW\n\n");
    }
    else
    {
        int e;
        e = dq[left];
        if (left==right)
        {
            left=right=-1;
        }
        else
        {
            right=((right-1+size)%size);
        }
    }
}

void display()
{
    int a;

     if(left == -1)
   {
    printf("QUEUE IS EMPTY\n\n");
   }
   else
   {
   for (a=left;a<=right;a++)
   printf("|%d",dq[a]);
   printf("|");
   printf("\n");
   }
}
