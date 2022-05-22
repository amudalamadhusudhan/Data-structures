//1. profgram menu driven program for stack implementation using array

#include<stdio.h>
#include<stdlib.h>
int s=10,top=-1,stack[10];

void push(int e);
void pop();
void display();
int main()
{
int e,f,i,choice;

while(choice!=4)
{
printf("menu driven program for the stack 1.push 2.pop 3.display 4.exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the element t push opration on the stack\n");
scanf("%d",&e);
push(e);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(4);
break;
default:
printf("wrong choice\n");
}
}
return 0;
}
void push(int e)
{
if(top==s-1)
printf("stack over flow\n");
else 
top++;
stack[top]=e;
printf("element %d is push to stack [%d]\n",e,top);
}
void pop()
{
int f;
if(top==-1)
printf("stack empty\n");
else 
f=stack[top];
top--;
printf("element %d is pop from stack [%d] \n",f,top);
}
void display()
{
int i;
printf("display the stack\n");
if(top!=-1)
for (i=top;i>=0;i--)
printf("the stack element stack=[%d]\n",stack[i]);
else
printf("stack empty\n");
printf("\n");
}







