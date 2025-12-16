#include<stdio.h>
int difference(int a,int b,int c){
	return a-b-c;
}
int main()
{
	int n1,n2,n3,result;
	scanf("%d %d %d",&n1,&n2,&n3);
	result=difference(n1,n2,n3);
	printf("%d",result);
	return 0;
}
