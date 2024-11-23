#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[]="LANQIAO";
	char b[1000];
	scanf("%s",b,sizeof(b));
	int c = strlen(b);
	int d[7];
	int g =0;
	for(int i=0;i<7;i++)
	{
		
		for(int j=g;j<c;j++)
		{
			if(a[i]==b[j])
			{
				d[i]=j;
				g = j;
				break;
			}
		}
	}
	if(d[0]<d[1] && d[1]<d[2] && d[2]<d[3] && d[3]<d[4] && d[4]<d[5] && d[5]<d[6])
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
