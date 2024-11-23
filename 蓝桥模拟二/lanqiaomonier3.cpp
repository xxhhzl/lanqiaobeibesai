#include<stdio.h>
int main()
{
	int a = 0;
	for(int i=1;i<=2024;i++)
	{
		if((i^2024)<2024)
		{
			a++;
		}
	}
	printf("%d",a);
	return 0;
}
