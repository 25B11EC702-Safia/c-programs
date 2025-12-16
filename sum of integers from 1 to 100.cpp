#include<stdio.h>
int main()
{
	int i,sum;
	sum=0;
	for(i=1;i<101;i++)
	{
		sum=sum+i;
	}
	printf("sum of the integers from 1 to 100:%d",sum);
	return 0;
	
}
