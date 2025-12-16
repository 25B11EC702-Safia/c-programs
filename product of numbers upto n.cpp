#include<stdio.h>
int main()
{
int n,i,prod;
printf("Enter the value of n");
scanf("%d",&n);
prod=1;
for(i=1;i<=n;i++)
{
	prod=prod*i;
}
printf("product of numbers upto n is :%d",prod);
return 0;

}
