#include<stdio.h>
int main()
{
	int a[10000];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<(n-1);i++)
	{
		int b=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[b]>=a[j])
			{
				b=j;
			}
			int c;
			c=a[i];
			a[i]=a[b];
			a[b]=c;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d",a[i]);
			return 0;
		}
	}
}
