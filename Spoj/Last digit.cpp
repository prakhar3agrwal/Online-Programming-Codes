#include<iostream>
#include<math.h>
using namespace std;
int main()
{
long long int b,x1,x2;
int a,n,x,y;
cin>>n;
while(n--)
{
          cin>>a>>b;
          if(b==0)
                 cout<<"1\n";
          else
          {
              x=a%10;y=b%4;
              if(x==0 || x==1 || x==5 || x==6)
                      cout<<x<<"\n";
              else
              {
                   if(b%4!=0)
                             x1=pow(x,y);
                   else
                             x1=pow(x,4);
                             x2=x1%10;
                             cout<<x2<<"\n";
              }
          }
}
}                    
