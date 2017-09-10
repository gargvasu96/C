#include <stdio.h>
#include <stdlib.h>
#define size 10

void insert();
void delete();
void display();

struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL,*var;


int main()
{

    int e,c,i,a;
printf("\t\t\t\tCIRCULAR QUEUE OPERATIONS USING LINKED LIST\n\n");
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

    return 0;
}

void insert()
{
        int e;
        printf("Enter the value to insert\n");
        scanf("%d",&e);
        var = (struct node*)malloc(sizeof(struct node));
        var->data=e;
        if (front==NULL)
        {
            rear=rear->next;
            front=front->next;
            var->next=front;
            rear=var;
            front=rear;
        }
        else
        {
            var->next=front;
            rear->next=var;
            rear=rear->next;
        }
}
void delete()
{
    if (front==NULL)
            printf("LIST IS EMPTY\n");
    else
    {
        int e;
        var=front;
        e=front->data;
        printf("%d ITEM IS DELETED",e);
        front=var->next;
        free(var);
    }
}

void display()
{
   var=front;

    if (front == NULL)
   {
    printf("LIST IS EMPTY\n\n");
   }
   else
   {
       while (var->next!=front)
       {
           printf("%d",var->data);
           var=var->next;
       }
   }


}
