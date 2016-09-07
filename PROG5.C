#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,a[10],n;
clrscr();
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(k=0;k<n;k++)
{
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[k]*a[k]==a[i]*a[i]+a[j]*a[j])
{
printf("%d %d %d",i,j,k);
}
}
}
}
getch();
}