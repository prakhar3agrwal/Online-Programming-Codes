#include<iostream>
using namespace std;
int main()
{
long long int n,s,a;
char c;
cin>>n;
while(n--)
{
          cout<<"\n";
          cin>>a;
          c='*';s=a;
          while(c!='=')
          {
                        
                       cin>>c;
                       if(c=='=')
                       break;
                       cin>>a;
                       if(c=='*')
                       s*=a;
                       else if(c=='/')
                       s/=a;
                       else if(c=='-')
                       s-=a;
                       else if(c=='+')
                       s+=a;
          }
          if(c=='=')
          cout<<s<<"\n";
}
return 0;
}
