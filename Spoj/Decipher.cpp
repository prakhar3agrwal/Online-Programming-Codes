#include<stdio.h>
main()
{
long long int a,b,c;
int t;
scanf("%d",&t);
while(t--)
{
          scanf("%lld%lld%lld",&a,&b,&c);
          a=a*a-2*b;
          a=a>0?a:(-1)*a;
          printf("%lld\n",a);
}
}
