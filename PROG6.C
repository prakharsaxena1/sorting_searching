#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,min,a[10],n,sum,p1,p2;
clrscr();
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the element ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=abs(a[i]+a[j]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;i++)
{
sum=abs(a[i]+a[j]);
if(sum<min)
{
min=sum;
p1=i;
p2=j;
}
}
}
printf("%d %d",a[p1],a[p2]);
getch();
}
