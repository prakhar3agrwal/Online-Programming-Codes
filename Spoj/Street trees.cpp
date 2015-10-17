#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <conio.h>
using namespace std;

unsigned long long int gcd (unsigned long long int a,unsigned long long  int b){
    if ( b==0) return a;
    else
    return gcd ( b , a%b );
                      }
int main ()
{
unsigned long long int min=1000000001,z,s=0,n,i,j;
scanf("%llu",&n);
unsigned long long int x[n],y[n];
scanf("%llu%llu",&x[0],&x[1]);y[0]=x[1]-x[0];
for(i=2;i<n;i++)
{
                scanf("%llu",&x[i]);
                y[i-1]=x[i]-x[i-1];
                z=gcd(y[i-1],y[i-2]);
                min=min<z?min:z;
}
for(i=0;i<n-1;i++)
s+=y[i]/min;
s-=(n-1);
printf("%llu\n",(s));
getch();
}               
