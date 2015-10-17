#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float a,h,v,s,x;
int n;
scanf("%d",&n);
while(n--)
{
          cin>>v;
          a=cbrt(4*v);
          h=(2*v)/(a*a*sin(3.14159265358/3));
          s=((a*a*sin(3.14159265358/3)))+3*a*h;
          printf("%0.10f\n",s);
}
}

