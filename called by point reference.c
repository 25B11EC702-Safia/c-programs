#include<stdio.h>
void display(int* ,int* );
int main()
{
	int a,b;
	a=5,b=10;
	display(&a,&b);
	
	printf("%d %d",a,b);
	return 0;
}
void display(int *a1,int *b1)
{
	*a1=20;
	*b1=30;
}
