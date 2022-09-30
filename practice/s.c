#include <stdio.h>
#include <stdlib.h>
#define size 10
int stack[size], top = -1;
void push(int e);
void pop();
void display();
void isempty();
int main()
{
    int a, c, e;
    while (1)
    {
        printf("enter the choice 1 push 2 pop 3 dispaly 4 exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("enter the element to push to stack\n");
            scanf("%d", &e);
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
            printf("entered wrong choice\n");
        }
    }
}
void push(int e)
{
    if (top == size - 1)
    {
        printf("stack is full cannot push the elements\n");
    }
    top++;
    stack[top] = e;
    printf("element %d is push to stack [%d]\n", e, top);
}
void pop()
{
    int e;
    if (top == -1)
    {
        printf("stack is empty cant pop the elements\n");
    }
    e = stack[top];
    top--;
    printf("%d element pop from  the stack \n", e);
}
void display()
{
    if (top == -1)
    {
        printf("stack is empty cannot display\n");
    }
    for (int i = top; i >= 0; i--)
    {
        int e = stack[i];
        printf("stack elements stack[%d]=%d\n", i, e);
    }
}
