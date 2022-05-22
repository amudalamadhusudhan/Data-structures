//2. profgram for sort stack using array

#include<stdio.h>
int s=10,top=-1,stack[10];
void push(int e);
int pop();
void display();
void isempty();
int peak();
int main()
{
int e,a,v,b,c,i,j,p;
void isempty();
printf("push opration on the stack\n");
for(i=0;i<s;i++)
{
scanf("%d",&e);
push(e);
}
printf("before sorting\n");
display();
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
 {
 if(stack[i]>stack[j]) 
  {
    v=stack[i];
    stack[i] =stack[j];
    stack[j] = v;
  }
 }
}
printf("after sorting\n");
display();
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
int pop()
{
int f;
if(top==-1)
printf("stack empty\n");
else 
f=stack[top];
printf("element %d is pop from stack [%d] \n",f,top);
return(f);
}
void display()
{
int i;
printf("display the stack\n");
if(top!=-1)
for (i=top;i>=0;i--)
printf("the stack element stack=[%d]=[%d]\n",i,stack[i]);
else
printf("stack empty\n");
printf("\n");
}
void isempty()
{
if(top==-1)
printf("stack empty\n");
else
printf("stack not empty\n");
}
int peak()
{
if(top==-1)
printf("stack empty\n");
else
return(stack[top]);
}


