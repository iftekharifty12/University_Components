#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *node;
};

typedef struct Node node;

void menu();
node* createNode();
node* insert_head(node *head, node *nn);
node* insert_tail(node *head, node *nn);
void listPrint(node *head);

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
            nn = createNode();
            head= insert_head(head, nn);
        }
        else if(ch==2)
    {

    }
    else if(ch==3)
    {

    }
    else if(ch==4)
    {

    }
    else if(ch==8)
    {
        listPrint(head);

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
 node* insert_head(node *head, node *nn)
 {
     if(head == NULL)
     {
         head= nn;
     }
     else
     {
         nn->next =head;
         head = nn;
     }
}

node* insert_tail(node *head, node *nn)
 {
     if(head == NULL)
     {
         head= nn;
     }
     else
     {
         node *temp;
         head=nn;
         while(temp->next != NULL)
         {
             temp=temp->next;
         }
         temp->next=nn;
     }
}


void listPrint(node *head)
{
    node *temp;
    temp=head;
    while(temp!= NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n\n");
}

int maximumElement(struct Node *head)
{
    int max= INT_MIN;
    while(head!=NULL)
    {
        if(max< head->data)
        {
            max=head-> data;
        }
        else head=head->data;
    }
    return max;
}
