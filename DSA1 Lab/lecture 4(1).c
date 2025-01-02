#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

void menu();
node* createNode();

int main()
{
    node *head=NULL, *nn;

    int ch;

    menu();
    printf("enter choice: ");
    scanf("%d",&ch);

    while(ch!=0)
    {
        if(ch==1)
    {

    }
    else if(ch==2)
    {

    }
    else if(ch==3)
    {

    }
    else if(ch==8)
    {

    }
    else if(ch==9)
    {

    }
    else
    {
        printf("Invalid choice.\n\n");
    }
    menu();
    printf("enter choice: ");
    scanf("%d",&ch);
    }

}

void menu()
{
    printf("1. insert(head)\n");
    printf("2. insert(nth position)\n");
    printf("3. insert(tail)\n");
    printf("8. list print\n");
    printf("9. list size\n");
    printf("0. exit\n");
}

node* createNode()
{
    node *temp;
    temp= new node();
    printf("enter value: ");
    scanf("%d",&temp->data);
    temp->next = NULL;
    return temp;
}
