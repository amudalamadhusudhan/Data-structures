#include<stdio.h>
void bubble_sort(int [],int);

void main()
{
	int a[30],n,i,temp,j;
	printf("Enter no of elements :\n");
	scanf("%d",&n);
	printf("Enter array elements :\n");
	for(i=0;i<n;i++)
         scanf("%d",&a[i]);
   	printf("Unsorted Data:\n");
    	for(i=0;i<n;i++)
        printf("%d \t",a[i]);
    	for(i=1;i<n;i++)
    	{
         	for(j=0;j< n-i;j++)
		{
         		if(a[j]>a[j+1])
              		{
               			temp=a[j];
               			a[j]=a[j+1];
               			a[j+1]=temp;
               		}
	         }
	         }
	         printf("\n");
          printf("bubble sorted Data:\n");
        	for(i=0 ; i< n ; i++)
            printf("%d\t",a[i]);
}
