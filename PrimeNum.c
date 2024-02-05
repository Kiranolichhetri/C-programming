#include<stdio.h>
int main()
{
int n,count=0,i;
printf("Enter any number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==2)
printf("Prime Number\n");
else
printf("Not Prime\n");
}