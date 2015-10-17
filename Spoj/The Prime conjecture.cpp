#include<iostream>
#include<vector>
#include<signal.h>
#define LEN 2500000
int prime[5000001];
using namespace std;
int main()
{
int t,n,g=0,num;
scanf("%d",&t);
auto std::vector<bool> sieve(LEN,true);
long int i,j,k,i2,p,ans;
for(i=3;i*i<=LEN;i+=2) {
while( sieve[i]==false )
i+=2;
j = i*(i-2);
i2 = i<<1 ;
while( ( j = i2+j ) <= LEN )
sieve[j]=false;
}
prime [0] = 2 ;
for(i=3,j=1,k=1;i<=LEN;i+=2)
if( sieve[i] )
prime [k++] = i ;
while(t--)
{
          scanf("%d",&n);
          p=1;g++;
          for(i=0;i<n;i++)
          {
                          scanf("%d",&num);
                          p*=num;
          }
          p++;
          printf("Case #%d: ",g);
          {
              i=0;
              while(prime[i]<=p && i<k)
              {
                                if(p%prime[i]==0)
                                ans=prime[i];
                                i++;
              }
              printf("%ld\n",ans);
          }
}
}
