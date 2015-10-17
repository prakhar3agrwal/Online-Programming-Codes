#include<iostream>
using namespace std;
long long int gcd (long long int a, long long int b){
    if ( b==0) return a;
    else
    return gcd ( b , a%b );
                      }
int main()
{
long long int a[]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600},b[13];
long long int i,j,k,n,x,y,s;
while(scanf("%lld%lld",&n,&k)!=EOF)
{
                               s=0;
                               for(i=0;i<k;i++)
                               {
                                               scanf("%d",&b[i]);
                               }
                               x=a[n],y=1;
                               for(i=0;i<k;i++)
                               {
                                   y*=a[b[i]];
                                   j=gcd(x,y);
                                   x/=j;
                                   y/=j;
                               }
                               x/=y;
                               printf("%lld\n",x);
}         
return 0;
}
