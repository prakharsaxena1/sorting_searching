#include<stdio.h>
#include<conio.h>                     //print the number occured odd time
void main()
{
int i,n,t=0,a[10];
clrscr();
printf("Enter the limt for array");
scanf("%d",&n);
printf("Enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
a[i+1]=a[i]^a[i+1];
}
printf("%d",&a[n-1]);
getch();
}