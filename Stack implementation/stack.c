#include <stdio.h>
#include <stdlib.h>
#define size 10

void push();
void pop();
void display();
int stack[size],top=-1;
int main()
{

    int e,c,i,a;
printf("\t\t\t\tSTACK OPERATIONS\n\n");
for (i=0;;i++)
{
 printf("\t1 : PUSH OPERATION\n");
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
      //display();
      break;
  }
  case 2:
  {
   pop();
   //display();
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

void push()
{

    if (top == (size-1))
        {
            printf("OVERFLOW\n");
        }
    else
    {
        int e;
        printf("Enter the value to insert\n");
        scanf("%d",&e);
        top++;
        stack[top]=e;
        printf("The Value %d is PUSHED at %d\n\n",e,top);
    }
}
void pop()
{

    if (top == -1)
    {
        printf("UNDERFLOW\n\n");
    }
    else
    {
        int e;
        e = stack[top];
        printf("The Value %d is POPPED from %d\n\n",e,top);
        top--;
    }
}

void display()
{
    int a;

    if (top == -1)
   {
    printf("STACK IS EMPTY\n\n");
   }
   else
   {
   for (a=0;a<=top;a++)
   printf("|%d",stack[a]);
   printf("|");
   printf("\n");
   }
}
