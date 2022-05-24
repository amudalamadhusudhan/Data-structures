//4.program to implement stack using linklist

#include<stdio.h>
#include<stdlib.h>
struct list
{
int i,data;
struct list *link;
};
struct list *node,*temp,*top;  
void createlist(int v);
void display();
void deleteEND();
int main()
{
int i,n,value;
printf("enter the n number of nodes\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("enter the data into linked list[%d]\n",i);
scanf("%d",&value);
createlist(value);
}
printf("before deleting the end ");
display();
deleteEND();
printf("after deleting the end ");
display();
return 0;
}
void push(int v)
{          






