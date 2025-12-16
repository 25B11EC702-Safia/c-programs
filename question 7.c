#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	scanf("%s",str1);
	scanf("%s",str2);
	int lenght=strlen(str1);
	printf("%d\n",lenght);
	strcat(str1,str2);
	printf("concatenation string =%s",str1);
	return 0;
}
