#include <stdio.h>
#include <stdlib.h>
#define size 10

void push();
void pop();
void display();

struct node
{
    int data;
    struct node *next;
}*top=NULL,*var;
int main()
{

    int e,c,i,a;
printf("\t\t\t\tSTACK OPERATIONS USING LINKED LIST\n\n");
for (i=0;;i++)
{
 printf("\n\t1 : PUSH OPERATION\n");
 printf("\t2 : POP OPERATION\n");
 printf("\t3 : DISPLAY\n");
 printf("\t4 : EXIT\n");
 printf("\tChoose your Choice\n");
 scanf("%d",&c);
 switch(c)
 {
  case 1:
  {
      push();
      display();
      break;
  }
  case 2:
  {
   pop();
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

void push()
{
    int e;
    printf("ENTER THE DATA\n");
    scanf("%d",&e);

    if(top==NULL)
    {
        var = (struct node*)malloc(sizeof(struct node));
        var->data=e;
        var->next=NULL;
        top=var;
    }
    else
    {
        var = (struct node*)malloc(sizeof(struct node));
        var->data=e;
        var->next=top;
        top=var;
    }

}
void pop()
{
    int e;
    if (top==NULL)
    {
        printf("THE STACK IS EMPTY\n");
    }
    else
    {
        var=top;
        e=top->data;
        top=var->next;
        free(var);
        printf("%d IS DELELED\n",e);
    }

}

void display()
{
    int a;

    if (top == NULL)
   {
    printf("STACK IS EMPTY\n\n");
   }
   else
   {
       var=top;
       while(var!=NULL)
       {
           printf("|%d|",var->data);
           var=var->next;
       }
printf("\n");
   }
}
