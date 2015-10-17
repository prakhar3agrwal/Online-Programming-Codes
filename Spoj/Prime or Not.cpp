#include<iostream>
#include <assert.h>
#include<math.h>
using namespace std;
long long num;
long long pri[7] = {2,3,5,7,11,13,17};
bool flag;

long long mod( long long x , long long y )
{
assert(x>=0);
assert(y>=0);
long long z = x%y;

if( z < 0 )
z+=y;
assert(z>=0);
return z;
}

long long mod2( long long x , long long y , long long n )
{

long long temp = mod(y,n);
long long res = 0;
while(x)
{
if( x % 2 == 1 && (res += temp) >= n )
res-=n;
temp<<=1;
if( temp >= n )
temp-=n;
x>>=1;
}
return res;

}

long long po( long long x , long long y , long long n )
{
if( y == 0 )	return mod( 1 , n);

long long t = po( x , y/2 , n );

long long h;
if( t >= 1e9 )
h = mod2( t , t , n );
else
h = mod( t*t , n);

assert( h >= 0 );
if( y%2 == 0 ) return h;

if( x >= ( 1e18 / h ) )
return mod2( x , h , n);


return mod( x*h , n);
}

bool prime(long long n)
{
if( n == 0 || n == 1 ) return false;

if( n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17) return true;

long long count = 0;
long long d = n-1;
while(d%2 == 0 )
{
count++;
d/=2;
}
for(int k = 0 ; k < 7 ; k++)
{
long long a = pri[k];
bool flag = false;

long long x = po(a,d,n);

if( x == 1 || x == n-1 ) continue;

for(int j = 1 ; j <= count-1 ; j++)
{
if( x >= 1e9 )
x = mod2( x , x , n);
else
{
x = mod( x*x , n );
}
if( x == n-1 ) { 
flag = true; break ; }

}
if(!flag)
return false;

}
return true;
}
int main()
{
    long long n,t,i;
    cin>>t;
    for(i=0;i<t;i++)
   { cin>>n;
    if(prime(n)==true)
    cout<<"YES\n";
    else
    cout<<"NO\n"; }
    return 0;
}

