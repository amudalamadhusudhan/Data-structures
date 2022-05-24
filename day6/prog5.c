//5.program for stack implementation using linked list

#include<stdio.h>
#include<stdlib.h>
struct stack
{
int data;
struct stack *link;
}*top=NULL; 
void push(int a);
void pop();
void display();
                                                                           
int main()
{
int a,i,j,n;
printf("enter the no of elments to push to the stack \n");
scanf("%d",&n);
printf("enter the no of elments to pop from the stack \n");
scanf("%d",&j);
for(i=0;i<n;i++)
{
printf("enter the elments to push to the stack \n");
scanf("%d",&a);
push(a);
}
for(i=0;i<j;i++)
{
pop();
}
display();
return 0;
}
void push(int a)
{
struct stack *temp;
temp=(struct stack*)malloc(sizeof(struct stack));
if(temp==NULL)
{
printf("stack is overflow beacuse of no space for dynamic memory allacation\n");
}
else
{
temp->data=a;
temp->link=top;// top increment
top=temp;
printf("element [%d] is push to the stack\n",a);
}
}
void pop()
{
int a;
struct stack *temp;
if(top==NULL)
{
printf("stack is empty\n");
}
else
temp=top;
a=temp->data;
top=top->link;//decrement top
printf("%d element is pop from the stack\n",a);
free(temp);// free memory acuupied and copied to top
}
void display()
{
struct stack *temp;
temp=top;
if(top==NULL)
printf("stack is empty\n");
else
while(temp!=NULL)
{
printf("display the stack=[%d]\n",temp->data);
temp=temp->link;
}
}


















