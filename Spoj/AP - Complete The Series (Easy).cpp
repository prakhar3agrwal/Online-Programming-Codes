#include<stdio.h>
main()
{
long long int x,y,z,n,a,d,i,t;
scanf("%lld",&t);
while(t--)
{
          scanf("%lld%lld%lld",&x,&y,&z);
          n=(2*z)/(x+y);
          d=(x-y)/(5-n);
          a=x-(2*d);
          printf("%lld\n%lld",n,a);
          for(i=0;i<n-1;i++)
          {
                          a+=d;
                          printf(" %lld",a);
          }
          printf("\n");
}
return 0;
}
