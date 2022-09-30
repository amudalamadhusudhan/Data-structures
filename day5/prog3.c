// 3.program to insert element begining of a linkedlist

#include <stdio.h>
#include <stdlib.h>
struct list
{
    int i, data;
    struct list *link;
};
struct list *head, *tail;
void createlist(int v);
void ibegining(int v);
void display();
int main()
{
    int i, b, n, value;
    printf("enter the n number of nodes\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("enter the data into linked list[%d]\n", i);
        scanf("%d", &value);
        createlist(value);
    }
    printf("enter the data insert new  node at begnnig of linked list[]\n");
    scanf("%d", &b);
    ibegining(b);
    display();
    return 0;
}
void createlist(int v)
{
    struct list *node;
    node = (struct list *)malloc(sizeof(struct list));
    node->data = v;
    node->link = NULL;
    if (head == NULL)
    {
        head = node;
        tail = node;
    }
    else
        tail->link = node;
    tail = node;
}

void ibegining(int v)
{
    struct list *new;
    new = (struct list *)malloc(sizeof(struct list));
    new->data = v;
    new->link = head;
    head = new;
}
void display()
{
    struct list *temp = head;
    if (head == NULL)
        printf("linked list is empty\n");
    while (temp != NULL)
    {
        printf("node data [%d]\t", temp->data);
        printf("link [%p]\n", temp->link);
        temp = temp->link;
    }
}
