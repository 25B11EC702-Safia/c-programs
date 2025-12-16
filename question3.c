#include<stdio.h>
int main()
{
	int n ,i;
	long long factorial=1;
	scanf("%d",&n);
	if(n<0)
	printf("error");
	else{
		for( i=0;i<=n;i++)
		factorial*=i;
		printf("%lld",factorial);
	}
	return 0;
}
