//1.program for hashing with collision

#include<stdio.h>

#define size 7

int arr[size];


void init() // intial we arreaging -1 which indicated to insert
{   
    int i;
    for(i = 0; i < size; i++)
        arr[i] = -1;
}

void insert(int value)
{   
    int key = value % size;
    
    if(arr[key] == -1)
    {   
        arr[key] = value;
        printf("%d inserted at arr[%d]\n", value,key);
    }
    else
    {   
        printf("Collision : arr[%d] has element %d already!\n",key,arr[key]);
        printf("Unable to insert %d\n",value);
    }
}

void del(int value)
{
    int key = value % size;
    if(arr[key] == value)
        arr[key] = -1;
    else
        printf("%d not present in the hash table\n",value);
}

void search(int value)
{
    int key = value % size;
    if(arr[key] == value)
        printf("Search Found\n");
    else
        printf("Search Not Found\n");
}

void print()
{
    int i;
    for(i = 0; i < size; i++)
        printf("arr[%d] = %d\n",i,arr[i]);
}

int main()
{
int i,n,d,s;
    init();
    printf("enter the element  to be  inseted\n");
    for(i=0;i<7;i++)
    {
    scanf("%d",&n);
    insert(n); //key = 10 % 7 ==> 3
    }
    printf("Hash table\n");
    print();
    printf("\n");
    
    printf("enter Deleting value \n");
    scanf("%d",&d);
    del(d);
    printf("After the deletion hash table\n");
    print();
    printf("\n");

    printf("enter the Searching value..\n");
      scanf("%d",&s);
    search(s);
   

    return 0;
}
