#include<stdio.h>
#include<math.h>
main()
{
long long int i,j,k,x,y,s,t,f,d,r1;
long double a,b,c,sum,sum2,sum1;
scanf("%d",&t);
while(t--)
{
          scanf("%lld%lld%lld",&x,&y,&s);
          b=((7*x)+(5*y)+(2*s));
          c=12.0*s;
          a=x+y;
          sum=(b)/(2.0*a);
          sum1=sum*sum;
          sum2=c/a;
          sum1-=sum2;
          sum1=sqrt(sum1);
          r1=llrintl(sum+sum1);
          d=llrintl((y-x)/(r1-6));
          f=x-2*d;
          printf("%lld\n",r1);
          for(i=0;i<r1;i++)
          {
                           printf("%lld ",f+i*d);
          }
          printf("\n");
}
return 0;
}
