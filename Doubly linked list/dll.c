#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *pre;
}*head,*var,*var2,*temp;


void forward_traversing()
{
     var2=head;
     if(var2==NULL)
     {
	      printf("\nLIST IS EMPTY\n");
     }
     else
     {
	      printf("\nELEMENTS IN THE LIST: ");
	      while(var2->next!=NULL)
	      {
	        printf(", %d",var2->data);
	        var2=var2->next;
	      }
        printf("\n");
     }
}

void backward_traversing()
{
     var2=head;
     if(var2==NULL)
	      printf("\nLIST IS EMPTY\n");
     else
     {
	     printf("\ELEMENTS IN THE LIST: ");
	     while(var2->next!=NULL)
	     {
	       var2=var2->next;
	     }
	     while(var2->pre!=NULL)
       {
          printf(", %d",var2->data);
          var2=var2->pre;
       }
       printf("\n");
    }
}

void insert_at_beginning()
{
     int value;
		 printf("\nENTER THE VALUE TO BE INSERTED");
		 scanf("%d",&value);
     var=(struct node *)malloc(sizeof (struct node));
     var->data=value;
     head->pre=var;
	   var->next=head;
	   var->pre=NULL;
	   head=var;
}


void insert_at_end()
{
   int value;
   printf("\nENTER THE VALUE TO BE INSERTED");
   scanf("%d",&value);
   var=(struct node *)malloc(sizeof (struct node));
   var->data=value;
   var2=head;
   while(var2->next!=NULL)
     var2=var2->next;
   var2->next=var;
   var->pre=var2;
   var->next=NULL;
}

void insert_in_middle()
{
   int value,val;
   printf("\nENTER THE VALUE AFTER WHICH THE DATA TO BE INSERTED");
   scanf("%d",&val);
   printf("\nENTER THE VALUE TO BE INSERTED");
   scanf("%d",&value);
   var=(struct node *)malloc(sizeof (struct node));
   var->data=value;
   var2=head;
   while(var2->data!=val)
      var2=var2->next;
   temp=var2->next;
   var2->next=var;
   var->pre=var2;
   var->next=temp;
   temp->pre=var;
}

void delete_from_beginning()
{
   var2=head;
   head=var2->next;
	 free(var2);
	 head->pre=NULL;
}

void delete_from_end()
{
   var2=head;
   while(var2->next!=NULL)
   {
       var=var2;
       var2=var2->next;
   }
   var->next=NULL;
   free(var2);
}

void delete_specific_element()
{
   int val;
   printf("\nENTER THE VALUE U WANT TO DELETE");
   scanf("%d",&val);
   var2=head;
   while(var2->data!=val)
   {
      var=var2;
      var2=var2->next;
   }
   temp=var2->next;
   var->next=temp;
   temp->pre=var;
   free(var2);
}
