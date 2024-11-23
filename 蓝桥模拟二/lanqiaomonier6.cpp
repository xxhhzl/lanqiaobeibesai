#include<stdio.h>
int main()
{
	int a = 2024;
	int n;
	scanf("%d",&n);
	if((a%n)==0)
	{
		printf("%d",a/n);
	}
	else
	{
		printf("%d",a/n+1);
	}
	return 0;
}
