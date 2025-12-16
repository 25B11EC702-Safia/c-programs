#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter 5 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[1];
	for(i=0;i<4;i++)
	{
		if(a[i]>min)
		{
			min=a[i];
			
		}
	}
	printf("smallesr=%d",min);
	return 0;
}
