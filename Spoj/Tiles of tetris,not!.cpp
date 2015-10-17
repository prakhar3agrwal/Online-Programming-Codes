#include<iostream>
using namespace std;
long long int gcd (long long int a, long long int b){
    if ( b==0) return a;
    else
    return gcd ( b , a%b );
                      }
int main()
{
long long int a,b,x;
while(1)
{
        scanf("%lld%lld",&a,&b);
        if(a==0 && b==0)
        break;
        x=gcd(a,b);
        printf("%lld\n",a*b/(x*x));
}
}
