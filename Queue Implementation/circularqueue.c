#include <stdio.h>
#include <stdlib.h>
#define size 10

void insert();
void delete();
void display();
int q[size],front=-1,rear=-1;
int main()
{

    int e,c,i,a;
//clrscr();
printf("\t\t\t\tCIRCULAR QUEUE OPERATIONS\n\n");
for (i=0;;i++)
{
 printf("\t1 : INSERTION\n");
 printf("\t2 : DELETION\n");
 printf("\t3 : DISPLAY\n");
 printf("\t4 : EXIT\n");
 printf("\tChoose your Choice\n");
 scanf("%d",&c);
 switch(c)
 {
  case 1:
  {
      insert();
      display();
      break;
  }
  case 2:
  {
   delete();
   display();
   break;
  }
  case 3:
  {
   display();
   break;
  }
  case 4:
  {
  exit(0);
  }
 }
}
//getch();

    return 0;
}

void insert()
{

    if (front==((rear+1)%size))
        {
            printf("OVERFLOW\n");
        }
    else
    {
        int e;
        printf("Enter the value to insert\n");
        scanf("%d",&e);
        if (front==-1)
        {
            front=rear=0;
        }
        else
        {
            rear=((rear+1)%size);
        }
        q[rear]=e;
    }
}
void delete()
{

    if (front == -1)
    {
        printf("UNDERFLOW\n\n");
    }
    else
    {
        int e;
        e = q[front];
        if (front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front=((front+1)%size);
        }
    }
}

void display()
{
    int a;

     if(front == -1)
   {
    printf("QUEUE IS EMPTY\n\n");
   }
   else
   {
   for (a=front;a<=rear;a++)
   printf("|%d",q[a]);
   printf("|");
   printf("\n");
   }
}
