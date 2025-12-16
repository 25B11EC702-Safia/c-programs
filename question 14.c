#include<stdio.h>
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("After swapping:%d %d",a,b);
}
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("Before swapping:%d %d",x,y);
	swap(x,y);
	return 0;
}

