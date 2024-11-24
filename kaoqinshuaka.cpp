#include <stdio.h>
#include <stdlib.h>
int css(int c[],int n)
{
  int b;
  int d =0;
  for(b=0;b<n;b++)
  {
    if(c[b]>c[b+1])
    {
      d = c[b];
      c[b]=c[b+1];
      c[b+1]=d;
    }
  }
  int i = 0;
  for(i;i<n;i++)
  {
    printf("%d",c[i]);
  }
  return 0;
}

int main(int argc, char *argv[])
{
  // 请在此输入您的代码
  int a,n;
  char b[n];
  int c[n];
  scanf("%d",&n);
  for(a=0;a<n;a++)
  {
    scanf("%s",&b[a]);
    scanf("%d",&c[a]);
  }
  css(c,n);
  return 0;
}
