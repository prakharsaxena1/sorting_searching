#include<stdio.h>                      //Missing number
#include<conio.h>
void main()
{
int a[10],n,i,j,t;
clrscr();
printf("Enter the limit");
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
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<n;i++)
{
if((a[i+1]-a[i])!=1)
{
printf("\n%d",a[i]+1);
break;
}
}
getch();
}
