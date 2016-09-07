#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,x,y,f=0;
clrscr();
printf("Enter the limit");
scanf("%d",&n);
for(x=0;x<n;x++)
{
scanf("%d",&a[x]);
}
for(x=0;x<n;x++)
{
for(y=x+1;y<n;y++)
{
if(a[x]==a[y])
{
f++;
break;
}
}
}
if(f==1)
{
printf("Its is duplicate");
}
else
{
printf("Its is not duplicate");
}
getch();
}