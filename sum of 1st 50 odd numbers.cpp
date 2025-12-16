#include<stdio.h>
int main()
{
int n,sum;
n=1;
sum=0;
while(n<=99)
{
	sum=sum+n;
	n=n+2;
}
printf("sum of 1st 50 odd numbers is:%d",sum);
return 0;
}
