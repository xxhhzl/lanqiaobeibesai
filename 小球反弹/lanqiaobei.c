#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main(int argc, char *argv[])
{
 long long int t,x,y,a,b,c;
 x = 15;
 y = 17;
 a = 233333;
 b = 343720;
 c = 0;
 double d = 0;
 for(t=1;t;t++)
 {
   if((x*t%343720==0 && y*t%233333==0) && t%2==0)
   {
     c =(t*x)^2+(t*y)^2;
     d = sqrt(c);
     printf("%lf",d);
     break;
   }
 }

  return 0;
}
