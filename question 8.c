#include<stdio.h>
int main()
{
	float radius,area;
	const float PI=3.14;
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("%.2f",area);
	return 0;
}
