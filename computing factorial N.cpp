#include<stdio.h>
int main()
{
	int N,F=1,i;
	printf("enter the value of N");
	scanf("%d",N);
	for(i=1,i<=N,i++)
	{
		F=F*i;
	}
	printf("factorial of N is:%d",N);
	return 0;
}
