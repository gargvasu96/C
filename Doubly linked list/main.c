#include <stdio.h>
#include <stdlib.h>
#include "dll.c"

void forward_traversing();
void backward_traversing();
void insert_at_beginning();
void insert_at_end();
void insert_in_middle();
void delete_from_beginning();
void delete_from_end();
void delete_specific_element();


int main()
{
int a,i;
printf("\n\t\tIMPLEMENTATION OF DOUBLY LINKED LIST\n");

  for(i=0;;i++)
  {
       printf("\n\tSELECT YOUR CHOICE\n");
       printf("\n\tINSERTION AT BEGINNING               - 1");
       printf("\n\tINSERTION AT THE END                 - 2");
       printf("\n\tINSERTION AFTER THE SPECIFIC ELEMENT - 3");
       printf("\n\tDELETION FROM THE BEGINNING          - 4");
       printf("\n\tDELETION FROM THE END                - 5");
       printf("\n\tDELETION OF THE SPECIFIC DATA ITEM   - 6");
       printf("\n\tFORWARD TRAVERSING                   - 7");
       printf("\n\tBACKWARD TRAVERSING                  - 8");
       printf("\n\tEXIT                                 - 9\n");

     scanf("%d",&a);

    switch (a)
    {
      case 1 :
          {
            insert_at_beginning();
            forward_traversing();
            break;
          }
      case 2 :
          {
            insert_at_end();
            forward_traversing();
            break;
          }
      case 3 :
          {
              forward_traversing();
            insert_in_middle();
            forward_traversing();
            break;
          }
      case 4 :
          {
            delete_from_beginning();
            forward_traversing();
            break;
          }
      case 5 :
          {
            delete_from_end();
            forward_traversing();
            break;
          }
      case 6 :
          {
              forward_traversing();
            delete_specific_element();
            forward_traversing();
            break;
          }
      case 7 :
          {
            forward_traversing();
            break;
          }
      case 8 :
          {
            backward_traversing();
            break;
          }
      case 9 :
          {
              exit(0);
          }
    }

  }
  return 0;
}
