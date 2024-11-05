#include<stdio.h>
int css(int n)
{
    int i;
    i = (n/15)*2;
    printf("%d",i);
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    css(n);
    return 0;
}
