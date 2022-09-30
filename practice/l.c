// create a linked list and display the list menu driven program

#include <stdio.h>
#include <stdlib.h>
void createthelist(int d);
void displaylist();
void insertBegning(int v);
void insertEnding(int v);
void ipos();
struct list
{
    int data;
    struct list *link;
} * head, *tail;
int main()
{
    int c, d, b, a;
    while (1)
    {
        printf("choose the operation to be performed 1 create the list 2 display 3 ins begning 4 ins ending  5 pos 6 exit \n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("enter the data \t");
            scanf("%d", &d);
            createthelist(d);
            break;
        case 2:
            displaylist();
            break;
        case 3:
            printf("enter the data insert new  node at begnnig of linked list[]\n");
            scanf("%d", &b);
            insertBegning(b);
            break;
        case 4:
            printf("enter the data insert new  node at ending of linked list[]\n");
            scanf("%d", &b);
            insertEnding(b);
            break;
        case 5:
            printf("enter the data insert new  node at positiom of linked list[]\n");
            scanf("%d", &b);
            ipos(b);
            break;
        case 6:
            exit(4);

        default:
            printf("your entered wrong choice\n");
        }
    }
}
void createthelist(int d)
{
    struct list *node;
    node = (struct list *)malloc(sizeof(struct list));
    node->data = d;
    node->link = NULL;
    if (head == NULL)
    {
        head = node;
        tail = node;
    }
    tail->link = node;
    tail = node;
}
void displaylist()
{
    struct list *temp = head;
    if (head == NULL)
    {
        printf("list is empty\n");
    }
    while (temp != NULL)
    {
        printf("node data [%d]\t", temp->data);
        printf("link [%p]\n", temp->link);
        temp = temp->link;
    }
}
void insertBegning(int v)
{
    struct list *new;
    new = (struct list *)malloc(sizeof(struct list));
    new->data = v;
    new->link = head;
    head = new; // new head assigned
}
void insertEnding(int v)
{
    struct list *new;
    new = (struct list *)malloc(sizeof(struct list));
    new->data = v;
    tail->link = new;
    new->link = NULL;
    tail = new;
}
void ipos(int v)
{
    int pos;
    struct list *new, *temp = head;
    new = (struct list *)malloc(sizeof(struct list));
    printf("enter the postion\n");
    scanf("%d", &pos);
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->link;
        new->data = v;
        new->link = temp->link; // creating link
        temp->link = new;
    }
}