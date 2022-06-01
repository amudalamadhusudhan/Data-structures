//1.program for circular queue emplementation using array

#include<stdio.h>
int s=10,front =-1,rear=-1,queue[10];
void enqueue(int k);
void dequeue();
void display();
void empty();
int main()
{
int i,choice,v;
printf("1.insertion 2.deletion 3.display 4.empty 5 exit\n");
while(choice!=5)
{
printf("enter the choice of opration\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the value to insert \n ");
scanf("%d",&v);
enqueue(v);
break;
case 2:
dequeue();
break;
case 3: 
display();
break;
case 4: 
empty();
break;
default: 
printf("wrong selection\n");
 }
}
return 0;
}
void enqueue(int k)
{
if(front==-1 && rear==-1)     
{  
front=0;
rear=0; //  rear++ we cant do becoz it is in circular
queue[rear]=k;
printf("%d element is inserted into queue [%d]\n",k,queue[rear]);
}
else if(((rear+1)%s)==front)
{
printf("queue is full\n");
}
else
rear = (rear+1)%s; // here we are doing
queue[rear]=k;
printf("%d element is inserted into queue [%d]\n",k,queue[rear]);
}
void dequeue()
{
if(front ==-1 && rear == -1)
{
printf("queue is Empty deletion is not possible\n");
}
else if(front == rear) // one element in queue
{
front=rear=-1;
printf("%d element is deleted \n", queue[front]);
}
else
{
printf("%d element is deleted \n", queue[front]);
front=(front+1)%s;
}
}
void display()
{
int i=0;
printf("display the elemnts\n");
if(front==-1&&rear==-1) 
{ 
printf("queue is empty\n");
}
else
{
while(i<=rear)
{
printf("display element  [%d]=queue [%d]\n",i,queue[i]);
i=(i+1)%s;
}
}
}
void empty()
{
if(front==-1 && rear==-1)  
printf("queue is empty\n");
}




