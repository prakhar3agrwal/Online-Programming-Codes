#include<stdio.h>
#include<math.h>
main()
{
int t,n;
double v;
scanf("%d",&t);
while(t--)
{
          scanf("%d",&n);
          v=(8*(2-sqrt(2)))*n*n*n;
          printf("%0.4f\n",v);
}
return 0;
}
