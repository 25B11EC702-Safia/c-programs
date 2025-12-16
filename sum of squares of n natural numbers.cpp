#include<stdio.h>
int main()
{
	int n,i,sum;
	sum=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i;
	}
	printf("sum of squares of natural numbers:%d",sum);
	return 0;
}
