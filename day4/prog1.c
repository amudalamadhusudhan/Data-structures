//1.program for queue emplementation using array

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
if (rear==s-1)
printf("queue is full\n");
else if(front==-1 && rear==-1)        
front=0;
rear++; //  rear=0;
queue[rear]=k;
printf("%d element is inserted into queue [%d]\n",k,queue[rear]);
}
void dequeue()
{
if(front == rear)
printf("queue is Empty deletion is not possible\n");
else
{
printf("%d element is deleted \n", queue[front]);
front++;
}
}
void display()
{
int i;
printf("display the elemnts\n");
if(front==-1 && rear==-1)  
printf("queue is empty\n");
else
for(i=front;i<=rear;i++)
{
printf("display element  [%d]=queue [%d]\n",i,queue[i]);
}
}
void empty()
{
if(front==-1 && rear==-1)  
printf("queue is empty\n");
}




