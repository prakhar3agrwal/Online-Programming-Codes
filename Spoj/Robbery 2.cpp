#include<stdio.h>
#include<math.h>
main()
{
long long int a[101],s,n,y,z,k,x,d,m,i;
int t;
scanf("%d",&t);
while(t--)
{
          scanf("%lld%lld",&x,&k);
          n=(long long int)(sqrt(1+8*x)-1)/2;
          z=(n*(n+1))/2;
          y=x-z;
          d=n/k;
          m=n%k;
          for(i=0;i<m;i++)
          a[i]=((d+1)*((2*(i+1))+(d*k)))/2;
          for(i=m;i<k;i++)
          a[i]=((d)*(2*(i+1)+((d-1)*k)))/2;
          a[(m)%k]+=y;
          for(i=0;i<k;i++)
          printf("%lld ",a[i]);
          printf("\n");
}
return 0;
}                
