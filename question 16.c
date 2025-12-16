#include<stdio.h>
int sumofthree(int a,int b,int c)
{
	return a+b+c;
	
}
int main()
{
	int num1,num2,num3,result;
	scanf("%d %d %d",&num1,&num2,&num3);
	result=sumofthree(num1,num2,num3);
	printf("%d",result);
	return 0;
}
