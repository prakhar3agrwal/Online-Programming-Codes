#include<stdio.h>
#include<math.h>
main()
{
long long int n,i,j,k,x,y,t;
scanf("%lld",&t);
while(t--)
{
          scanf("%lld",&n);
          i=n;j=0;
          while(i!=1)
          {
                     i/=2;
                     j++;
          }
          if(pow(2,j)!=n)
          j++;
          x=pow(2,j);
          printf("%lld ",x);
          if(n%2!=0)
          printf("%lld\n",j);
          else
          {
              k=n;
              y=0;
              while(k>0)
              {
                        y++;
                        if(k>=x)
                        k-=x;
                        x/=2;
              }y--;
              printf("%lld\n",y);
          }
}
}