#include<stdio.h>
#include<math.h>
int css(int n)
{
	int b,c=0;
	for(b=0;;b++)
	{
		n = sqrt(n);
		c++;
		if(n==1)
		{
			break;
		}
	}
	printf("%d",c);
	return 0;
}
int main()
{
	const int n = 2024;
	css(n);
	return 0;
}
