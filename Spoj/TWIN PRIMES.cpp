#include<iostream>
#include<vector>
#include<algorithm>
#define LEN 18409202
using namespace std;
main()
{
vector<bool> sieve(LEN,true);
long int i,j,k,i2;
for(i=3;i*i<=LEN;i+=2) {
while( sieve[i]==false )
i+=2;
j = i*(i-2);
i2 = i<<1 ;
while( ( j = i2+j ) <= LEN )
sieve[j]=false;
}    
int a[100000],b[100000],t,n;
scanf("%d",&t);
a[0]=3;b[0]=5;                             
k=1;
i=5;
while(k!=100000)
{
                   if( sieve[i]  && sieve[i+2])
                   {a[k]=i;
                   b[k]=i+2;
                   k++;}
                   i+=6;
}
while(t--)
{
          scanf("%d",&n);
          printf("%d %d\n",a[n-1],b[n-1]);
}
return 0;
}
