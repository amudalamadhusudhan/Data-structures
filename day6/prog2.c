//1.program to delete node at begining postuin linkedlist

#include<stdio.h>
#include<stdlib.h>
struct list
{
int i,data;
struct list *link;
};
struct list *node,*head,*tail;  
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
void createlist(int v)
{          
node=(struct list*)malloc(sizeof(struct list)); 
node->data=v;
node->link=NULL;
if(head==NULL)
{
head=node;
tail=node;
}
else
tail->link=node;
tail=node;
}
void display()
{
struct list *temp=head;
if (head == NULL)
printf("linked list is empty\n");
while(temp!=NULL)
{
printf("node data [%d]\t",temp->data);
printf("link [%p]\n",temp->link);
temp=temp->link;
}
}
void deleteEND()
{
struct list *temp=head;
while(temp->link!=tail)
{
temp=temp->link;
}
temp->link=NULL;
tail=temp;
}





