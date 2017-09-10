#include<stdio.h>
#include<conio.h>

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
}*root=NULL,temp;


void insert(struct tree *root,int item)
{
    temp=(struct tree *) malloc (sizeof(struct tree));
    temp=root;
    if (temp==NULL)
    {
        temp->data=item;
        temp->left=NULL;
        temp->right=NULL;
        root=temp;
    }
    else
    {
        if(item<root->data)
            insert(*root->left,item);
        else
            insert(*root->right,item);
    }
}

void inorder(struct tree *root)
{
    temp=root;
    if(temp!= NULL)
    {
        inorder(temp->left);
        printf("%d", temp->data);
        inorder(temp ->right);
    }
}
void preorder(struct tree *root)
{
    temp=root;
    if(temp != NULL)
    {
        printf("%d",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void postorder(struct tree *root)
{
    temp=root;
    if(temp!= NULL)
    {
        postorder(temp-> left);
        postorder(temp->right);
        printf("%d",temp->data);
    }
}



void main()
{
    int choice,item;
    while(1)
    {
        printf("\n IMPLEMENTAION OF BINARY TREE\n");
        printf("\n**********************************************\n");
        printf("\n 1.INSERTION");
        printf("\n 2.INORDER");
        printf("\n 3.PREORDER");
        printf("\n 4.POSTORDER");
        printf("\n 5.EXIT");
        printf("\n \t ENTER THE CHOICE: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("ENTER THE DATA TO BE INSERTED");
            scanf("%d",&item)
            insert(root,item);

            break;
        case 2:
            if(root == NULL)
                printf("Tree is not created!");
            else
                inorder(root);
            break;
        case 3:
            if(root ==NULL)
                printf("Tree is not created!");
            preorder (root);
            break;
        case 4:
            if(root == NULL)
                printf("Tree is not created!");
            postorder(root);
            break;
        case 5:
            exit();
        }
    }
    getch();
}
