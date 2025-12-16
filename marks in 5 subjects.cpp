#include<stdio.h>
int main()
{
	int english,maths,science,psychology,history,total;
	float average;
	//Asking for an input
	printf("enter the marks of english,maths,science,psychology,history");
	scanf("%d%d%d%d%d,&english,&maths,&science,&psychology,&history");
	total=english+maths+science+psychology+history;
	average=total/5.0;
	printf("total marks of the student:%d/n",total);
	printf("average marks of a student:%.2f/n",average);
	return 0;
}
