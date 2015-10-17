#include<iostream>
#include<vector>
#define LEN 86028122
int prime[5000001];
using namespace std;
int main()
{
int t;
scanf("%d",&t);
auto std::vector<bool> sieve(LEN,true);
long int i,j,k,i2;
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
    scanf("%ld",&i);
    printf("%d\n",prime[i-1]);
}
}
