#include<stdio.h>
#include<math.h>
int main()
{
	const int c = 2024;
	int b,a=0;
	for(b=1;;b++)
	{
		a = pow(b,3);
		if(a>c)
		{
			printf("%d",a-c);
			break;
		}
	}
	return 0;
}
