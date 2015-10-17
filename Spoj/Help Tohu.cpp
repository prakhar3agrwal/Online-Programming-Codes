#include<iostream>
using namespace std;
main()
{
int t;
double a,b=0.5,n;
scanf("%d",&t);
while(t--)
{
          cin>>n;
          a=b*(b-1/((n+1)*(n+2)*1.0));
          a+=b;
          printf("%0.11f\n",a);
}
return 0;
}
