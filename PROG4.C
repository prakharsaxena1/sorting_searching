#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n,a[10];
clrscr();
printf("Enter the number tocheck sum");
scanf("%d",&k);
printf("Enter the limt for array");
scanf("%d",&n);
printf("Enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]+a[j]==k)
{
printf("%d %d",a[i],a[j]);
}
break;
}
}
getch();
}