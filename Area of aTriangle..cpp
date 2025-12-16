#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
float S,A;
printf("entre values of a,b,c;/n");
scanf("%d%d%d,&a,&b,&c");
S=a+b+c/2;
A=sqrt(S*(S-a)*(S-b)*(S-c));
prinft("area of a triangle:%f,A");
return 0;	
}
