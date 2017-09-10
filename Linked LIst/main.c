#include <stdio.h>
#include <stdlib.h>
#include "ll.c"


void insert_at_beginning();
void insert_at_end();
void insert_at_middle();
void delete_from_beginning();
void delete_from_middle();
void delete_from_end();
void display();


int main()
{
     int i,a;
        printf("\n\t\tIMPLEMENTATION OF LINKED LIST\n\n");

   for (a=0;;a++)
     {
     printf("\n\tSELECT YOUR CHOICE\n");
     printf("\n\tINSERTION AT BEGINNING               - 1");
     printf("\n\tINSERTION AT THE END                 - 2");
     printf("\n\tINSERTION AFTER THE SPECIFIC ELEMENT - 3");
     printf("\n\tDELETION FROM THE BEGINNING          - 4");
     printf("\n\tDELETION FROM THE END                - 5");
     printf("\n\tDELETION OF THE SPECIFIC DATA ITEM   - 6");
     printf("\n\tDISPLAY                              - 7");
     printf("\n\tEXIT                                 - 8\n");


	   scanf("%d",&i);
	   switch(i)
	   {
		case 1:
         {
         insert_at_begning();
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
		    display();

		insert_at_middle();
		display();
		break;
		}
		case 4:
           {
           delete_from_beginning();
		display();
		break;
           }
		case 5:
		{
		delete_from_end();
		display();
		break;
		}
		case 6:
		{

		display();

		delete_from_middle();
		display();
		break;
		}
		case 7:
		{
		display();
		break;
		}
		case 8:
		{
		exit(0);
		}

	   }
      }
return 0;
}
