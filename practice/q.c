#include <stdio.h>
#include <stdlib.h>
#define size 10
int front = -1, rear = -1, queue[size];
void enqueue(int e);
void dequeue();
void display();
void isempty();
int main()
{
    int a, c, e;
    while (1)
    {
        printf("enter the choice 1 enqueu 2 dequeue 3 display 4 exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("enter the element to to insert to queue\n");
            scanf("%d", &e);
            enqueue(e);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(4);
        default:
            printf("entered wrong choice\n");
        }
    }
}
void enqueue(int e)
{
    if (rear == size - 1)
    {
        printf("queue is full cannot insert the element\n");
    }
    else if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[rear] = e;
        printf("element is inserted sucussfully queue[%d]=%d\n", queue[rear], e);
    }
    else
        rear++;
    queue[rear] = e;
    printf("element is inserted sucussfully queue[%d]=%d\n", queue[rear], e);
}
void dequeue()
{
    if (front == -1 && rear == -1 || front == rear)
    {
        printf("equeue is empty cannot delete the element\n");
    }
    int e = queue[front];
    printf("element is deleted from the equeue[%d] = %d\n", front, e);
    front++;
}
void display()
{
    if (front == -1 && rear == -1 || front == rear)
    {
        printf("equeue is empty cannot delete the element\n");
    }
    int i;
    for (i = front; i <= rear; i++)
    {
        printf("display element  [%d]=queue [%d]\n", i, queue[i]);
    }
}