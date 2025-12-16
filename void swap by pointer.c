#include<stdio.h>
void swap(int* ,int*);
int main()
{
	int a=10;
	int b=20;
	printf("Before swaping the values in main a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf("After swaping the values in main a=%d b=%d\n",a,b);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
