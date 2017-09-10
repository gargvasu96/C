#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*var,*var2;

void insert_at_begning()
{
    int value;
		 printf("\nenter the value to be inserted");
		 scanf("%d",&value);
     var=(struct node *)malloc(sizeof (struct node));
     var->data=value;
	 var->next=head;
	 head=var;
}

void insert_at_end()
{
    int value;
		printf("\nenter value to be inserted");
		scanf("%d",&value);
      var2=head;
      var=(struct node *)malloc(sizeof (struct node));
      var->data=value;
      if(head==NULL)
      {
	  head=var;
	  head->next=NULL;
      }
      else
      {
	  while(var2->next!=NULL)
	  {
	       var2=var2->next;
	  }
	  var->next=NULL;
	  var2->next=var;
      }
}

void insert_at_middle()
{
    int value,num;
		printf("\nafter which data you want to insert the data");
		scanf("%d",&num);
		printf("\nenter the value to be inserted");
		scanf("%d",&value);

     var=(struct node *)malloc(sizeof (struct node));
     var->data=value;
     var2=head;

     if(head==NULL)
     {
	  head=var;
	  head->next=NULL;
     }
     else
     {
	  while(var2->data!=num)
	  {
		var2=var2->next;
	  }
	  var->next=var2->next;
	  var2->next = var;
     }
}

void delete_from_middle()
{
    int value;
    printf("\nenter the data that you want to delete from the list shown above");
		scanf("%d",&value);

     var2=head;
     while(var2!=NULL)
     {
	  if(var2->data == value)
	  {
		if(var2==head)
		{
		     head=var2->next;
		     free(var2);
		}
		else
		{
		     var->next=var2->next;
		     free(var2);
		}
	  }
	  else
	  {
	       var=var2;
	       var2=var2->next;
	  }
     }
}

void delete_from_end()
{

     var2=head;
     while(var2->next != NULL)
     {
	  var=var2;
	  var2=var2->next;
     }
     if(var2 ==head)
     {
	  head=var2->next;
	  free(var2);

     }
     printf("data deleted from list is %d",var2->data);
     var->next=NULL;
     free(var2);

}

void delete_from_beginning()
{
   var2=head;
   head=var2->next;
		     free(var2);
}


void display()
{
     var2=head;
     if(var2==NULL)
     {
	  printf("\nList is Empty\n");
     }
     else
     {
	  printf("\nElements in the List: ");
	  while(var2!=NULL)
	  {
	       printf(", %d",var2->data);
	       var2=var2->next;
	  }
      printf("\n");
      }
}
