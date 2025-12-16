#include<stdio.h>
int main()
{
	int P,N,R;
	float SI;
	printf("enter the values of P,N,R");
	scanf("%d%d%d",&P,&N,&R);
	SI=(P*N*R)/100.0;
	printf("simple interest:%f",SI);
	return 0;
}
