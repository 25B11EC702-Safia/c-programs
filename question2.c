#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	int total;
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	float average;
	average=total/5.0;
	printf(" total=%d\n",total);
	printf(" average=%.0f\n",average);
	return 0;
}
