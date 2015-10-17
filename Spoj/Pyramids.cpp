#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double V,a,a1,b,b1,c,c1,n,w,x,y,z;
cin>>n;
while(n--)
{
          cin>>a>>b>>c>>c1>>b1>>a1;
          V=sqrt(((4*a*a*b*b*c*c)-(a*a*((b*b)+(c*c)-(a1*a1))*((b*b)+(c*c)-(a1*a1)))-
          (b*b*((c*c)+(a*a)-(b1*b1))*((c*c)+(a*a)-(b1*b1)))-
          (c*c*((a*a)+(b*b)-(c1*c1))*((a*a)+(b*b)-(c1*c1)))+
          (((b*b)+(c*c)-(a1*a1))*(((c*c)+(a*a)-(b1*b1)))*(((a*a)+(b*b)-(c1*c1))))))/12;
         printf("%0.4f\n",(V));
}
}
