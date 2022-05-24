
#include<stdio.h>
#include<stdlib.h>
struct queue
{
int data;
struct queue *link;
}*front=NULL,*rear=NULL;

void enqueue(int a);
void dequeue();
void display();
int main()
{
int i,j,n,a;
printf("enter the no of element to insert in queue\n");
scanf("%d",&n);
printf("enter the no of element to delete from the queue\n");
scanf("%d",&j);
for(i=0;i<n;i++)
{
printf("enter the element to insert in queue\n");
scanf("%d",&a);
enqueue(a);
}
for(i=0;i<j;i++)
{
dequeue();
}
display();
return 0;
}
void enqueue(int a)
{
struct queue *temp;
temp=(struct queue*)malloc (sizeof(struct queue));
temp->data=a;
temp->link=NULL;
if(rear==NULL)
{
front=temp;
rear=temp;
}
else // not null
{
rear->link=temp;
rear =temp; // re instailzation rear inserting data
}
printf("enqueue opreration element is inserted to the queue is  =%d\n",temp->data);
}
void dequeue()
{
int a;
struct queue *temp;
if(front==NULL)
{
printf("queue is empty");
}
else
temp=front;
a=temp->data;
front=front->link;
free(temp);
printf("dequeue opreration element is deleted from the queue is  =%d\n",a);
}
void display()
{
struct queue *temp;
temp =front;
if(front==NULL)
{
printf("queue is empty\n");
}
else 
while(temp!=NULL)
{
printf("display the queue is=[%d]\n",temp->data);
temp =temp->link;
}
}




