#include<stdio.h>
int main()
{
int m,l,h,i,n,a[100],key,flag;
l=0;
printf("enter the array size\n");
scanf("%d",&n);
h=n-1;
for(i=0;i<n;i++)
{
printf("enter the sorted array elemnts\n");
scanf("%d",&a[i]);
}
{
printf("enter the key\n");
scanf("%d",&key);
}
while(l<h)
{
m=(l+h)/2;
if(key==a[m])
{
flag=1;
break;
}
else if(key<m)
{
h=m-1;
}
else
{
key>m;
l=m+1;
}
}
if(flag==1)
{
printf("key is found %d=a[%d]\n",key,a[m]);
}
else
printf("%d key is found not found ",key);
}



