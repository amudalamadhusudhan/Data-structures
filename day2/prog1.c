//1. profgram for stack implementation using array

#include<stdio.h>
int s=10,top=-1,stack[10];

void push(int e);
void pop();
void display();
int main()
{
int e,f,i;
printf("push opration on the stack\n");
push(33);
push(61);
push(96);
push(13);
display();
printf("pop opration on the stack\n");
pop();
display();
pop();
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







