#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head,*var,*var2;

void insert_at_beginning(){
  int value;
	printf("\nenter the value to be inserted");
	scanf("%d",&value);
  var=(struct node *)malloc(sizeof (struct node));
  var->data=value;
	var->next=head;
	var2=head;
	while(var2->next!=head){
    var2=var2->next;
	}
	var2->next=var;
	head=var;
}

void insert_at_end(){
  int value;
	printf("\nenter value to be inserted");
	scanf("%d",&value);
  var=(struct node *)malloc(sizeof (struct node));
  var->data=value;
  var2=head;
	while(var2->next!=head){
    var2=var2->next;
	}
	var2->next=var;
	var->next=head;
}

void insert_at_middle(){
  int value,num;
  printf("\nenter the value to be inserted");
	scanf("%d",&value);
  var=(struct node *)malloc(sizeof (struct node));
  var->data=value;
  var2=head;
  if(head==NULL){
	  head=var;
	  head->next=var;
  }
  else{
    printf("\nafter which data you want to insert the data");
		scanf("%d",&num);
	  while(var2->data!=num){
      var2=var2->next;
	  }
	  var->next=var2->next;
	  var2->next = var;
  }
}

void delete_from_middle(){
  int value;
  printf("\nenter the data that you want to delete from the list shown above");
	scanf("%d",&value);
  var2=head;
  while(var2->data!=value){
    var=var2;
    var2=var2->next;
  }
  var->next=var2->next;
  free (var2);
}

void delete_from_end(){
  var2=head;
  while(var2->next != head){
	  var=var2;
	  var2=var2->next;
  }
  var->next=head;
  free(var2);
}

void delete_from_beginning(){
  var2=head;
  head=var2->next;
	free(var2);
}

void display(){
  var2=head;
  if (var2==NULL)
    printf("The List is Empty\n");
  else{
    printf("\nElements in the List: \n");
	  do{
      printf(", %d",var2->data);
	    var2=var2->next;
	  }while(var2->next!=head);
    printf("\n");
    }
}
