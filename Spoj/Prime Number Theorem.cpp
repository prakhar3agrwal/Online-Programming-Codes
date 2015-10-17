#include<iostream>
#include<vector>
#include<math.h>
#define LEN 99999989
using namespace std;
int main()
{
int n,low,high,mid;
double x,y,z;
vector<int>prime;
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
prime.push_back(2);
for(i=3,j=1,k=1;i<=LEN;i+=2)
if( sieve[i] )
prime.push_back(i);
k=prime.size();
while(1)
{
        scanf("%d",&n);
        if(n==0)
        break;
 
       
        low=0;high=k-1,mid=(low+high)/2;
        while(low<=high)
        {
                        if(prime[mid]==n)
                        break;
                        else if(prime[mid]>n)
                        high=mid-1;
                        else if(prime[mid]<n)
                        low=mid+1;
                        mid=(low+high)/2;
        }
        if(prime[mid]<n)
        {
                        while(mid<k && prime[mid]<n )
                        mid++;
        }
        else if(prime[mid]>n)
        {
                        while(mid>=0 && prime[mid]>n )
                        mid--;
        }
        if(prime[mid]==n)
        mid++;
        x=n/log(n);
        y=1.0*mid-x;
        if(y<0)
        y=y*(-1.0);
        y*=100.0;
        y/=mid;
        printf("%0.1f\n",y);
}
}

