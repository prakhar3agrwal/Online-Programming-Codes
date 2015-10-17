#include<stdio.h>
#include<math.h>
main()
{
int t;
long long int x,y,z;
double a,b,c,d,b1,a1,a2;
scanf("%d",&t);
while(t--)
{
          scanf("%lld%lld%lld",&x,&y,&z);
          a=1.0*(y+2*z);
          b=(x*z*1.0)/a;
          c=1.0*((y)/a)*z*z;
          b1=(b*b)+c;
          b1=sqrt(b1);
          a1=b+b1;
          a2=b-b1;
          if(a1>=0 && a1<=x)
          {
                   if(a1-llrintl(a1)==0.00)
                   printf("%lld\n",llrintl(a1));
                   else
                   printf("Not this time.\n");
          }
          else if(a2>=0 && a2<=x)
          {
                   if(a2-llrintl(a2)==0.00)
                   printf("%lld\n",llrintl(a2));
                   else
                   printf("Not this time.\n");
          }
          else
          printf("Not this time.\n");
}
return 0;
}
