#include<stdio.h>
int main()
{
int a = 2024;
int b = 1024;
for(int i=1;i;i++)
	{
		if(i%a==0 && i%b==0)
		{
			printf("%d",i);
			break;
	    }
	}
	return 0;
}
