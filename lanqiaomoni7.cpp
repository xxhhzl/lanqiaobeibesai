#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n,a=0;
	int i =0;
	long long int b[1000];
	int d,c=0;
	scanf("%d",&n);
	for(i=0;;i++)
	{
		b[i]=n%10;
		n = n/10;
		c++;
		if(n==0)
		{
			break;
		}
	}
	int g =b[0];
	for(d=0;d<c;d++)
	{
		if(g<=b[d])
		{
			g=b[d];
		}
	}
	printf("%lld",g);
	return 0;
}
