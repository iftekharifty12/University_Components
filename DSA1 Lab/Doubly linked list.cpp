#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next, *prev;
};

typedef struct Node node;

void menu();
node* createNode();
node* insert_head(node *head, node *nn);
node* insert_nth(node *head, node *nn, int pos);
node* insert_tail(node *head, node *nn);
node* delete_head(node *head);
node* delete_tail(node *head);
node* delete_nth(node *head, int pos);
void listPrint(node *head);
void listPrintRev(node *head);
int listSize(node *head);

int main()
{
    node *head=NULL, *nn;

    int ch, pos;

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
        printf("enter position: ");
        scanf("%d",&pos);
        if(pos >=1 && pos <= listSize(head)+1)
        {
            nn = createNode();
            head = insert_nth(head,nn,pos);
        }
        else
        {
            printf("invalid position\n\n");
        }
    }
    else if(ch==3)
    {
        nn = createNode();
        head = insert_tail(head,nn);

    }
    else if(ch==4)
    {
        head = delete_head(head);
    }
    else if(ch==5)
    {
        printf("enter position: ");
        scanf("%d",&pos);
        if(pos>=1 && pos<=listSize(head))
        {
            head=delete_nth(head, pos);
        }
        else
        {
            printf("invalid position\n\n");
        }
    }
    else if(ch==6)
    {
        head = delete_tail(head);
    }
    else if (ch==7)
    {
        listPrintRev(head);
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
    printf("4. delete(head)\n");
    printf("5. delete(nth position)\n");
    printf("6. delete(tail)\n");
    printf("7. list print(reverse)\n");
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
    temp->prev = NULL;
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
         head->prev = nn;
         head = nn;
     }
     return head;
}

node* insert_tail(node *head, node *nn)
 {
     if(head == NULL)
     {
         head= insert_head(head, nn);
     }
     else
     {
         node *temp;
         temp=head;
         while(temp->next != NULL)
         {
             temp=temp->next;
         }
         temp->next=nn;
         nn->prev = temp;
     }
     return head;
}

node* insert_nth(node *head, node *nn, int pos)
 {
     if(pos == 1)
     {
         head= insert_head(head, nn);
     }
     else if(pos == listSize(head)+1)
     {
         head=insert_tail(head,nn);
     }
     else
     {
         node *temp;
         temp=head;
         while(pos-2 > 0)
         {
             temp=temp->next;
             pos--;
         }
         nn->next=temp->next;
         nn-> prev = temp;
         temp->next->prev = nn;
         temp->next=nn;
     }
     return head;
}

void listPrint(node *head)
{
    node *temp;
    temp=head;
    while(temp!= NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n\n");

}

void listPrintRev(node *head)
{
      node *temp;
    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->prev;
    }
    printf("\n\n");
}

int listSize(node *head)
{
    int c=0;
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}

int maxValue(node *head)
{
    int mv;
    node *temp;
    temp = head;
    if(head!=NULL) mv= head->data;
    while(temp!=NULL)
    {
        if(temp->data >mv) mv=head->data;
        temp=temp->next;
    }
    return mv;
}

int summation(node *head)
{
    int sum = 0;
    node *temp;
    temp=head;
    while(temp!=NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

node* delete_head(node *head)
{
    if(head==NULL)
    {
        printf("nothing to delete\n");
    }
    else
    {
        node *temp;
        temp=head;
        head = head->next;
        if(head!=NULL)
            head->prev = NULL;
        delete(temp);
    }
    return head;
}

node* delete_tail(node *head)
{
    if (listSize(head) < 2)
    {
        head = delete_head(head);
    }
    else
    {
        node *temp;
        temp = head;
        while(temp->next->next !=NULL)
        {
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
    }
    return head;
}

node* delete_nth(node *head, int pos)
{
    if(pos==1)
    {
        head = delete_head(head);
    }
    else if(pos == listSize(head))
    {
        head = delete_tail(head);
    }
    else
    {
        node *temp, *del;
        temp=head;
        while(pos-2 > 0)
        {
            temp = temp->next;
            pos--;
        }
        del = temp->next;
        temp->next = del->next;
        del->next->prev= temp;
        delete(del);
    }
    return head;
}
