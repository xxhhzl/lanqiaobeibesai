#include<stdio.h>
#include<math.h>
int css(int v)
{
	int i;
	int a =0;
	long long int b[30]={9226, 4690, 4873, 1285, 4624, 1596, 6982, 590, 8806, 121, 8399, 8526, 5426, 64, 9655, 7705, 3929, 3588, 7397, 8020, 1311, 5676, 3469, 2325, 1226, 8203, 9524, 3648, 5278, 8647};
	for(i=0;i<30;i++)
	{
		a = a+pow(v^b[i],2);
	}
	return a;
}
int main()
{
	int v;
	int c;
	int n[999];
	for(v=0;v<999;v++)
	{
		n[v]=css(v);
	}
	if(n[v]<n[v-1])
	{
		c = n[v-1];
		n[v]=n[v-1];
		n[v-1]=c;
	}
	printf("%lld",n[0]);
	return 0;
}
