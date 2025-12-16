#include<stdio.h>
void display(int[],int);

int main()
{
  int ar[10],n=5;
  display(ar,n);  	
}
void display(int ar[],int b)
{
	int i;
	for(i=0;i<5;i++)
	scanf("%d",&ar[i]);
	for(i=0;i<5;i++)
	printf("%d",ar[i]);
	
}
