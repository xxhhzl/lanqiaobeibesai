#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int css(int a)
{
  printf("%.2f",a*sqrt(15*15+17*17));
  return 0;
}
int main()
{
  int b;
  for(b=1;b;b++)
  {
    if((b*15)%(343720*2)==0 && (b*17)%(233333*2)==0)
    break;
  }
  css(b);
  return 0;
}
