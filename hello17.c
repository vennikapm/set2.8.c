#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,a,b,c,count=0,sum=0,rem=0,rem1=0,t,i;
scanf("%d",&n);
while(n>0)
{
scanf("%d %d",&a,&b);
for(i=a;i<b;i++)
{
c=i;
t=i;
count=0;
sum=0;
while(i>0)
{
rem=i%10;
count++;
i=i/10;
}
while(c>0)
{
rem1=c%10;
sum=sum+pow(rem1,count);
c=c/10;
}
if(sum==t)
{
printf("%d",t);
}
}
n--;
}
getch();
}
