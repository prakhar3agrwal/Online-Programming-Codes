#include<iostream>
using namespace std;
int main()
{
unsigned int num;
int n,a,d,s,i;
cin>>num;
while(num--)
{
            s=i=0;
            cin>>n>>a>>d;
            i=a;
            while(n--)
            {
                      s+=i;
                      i+=d;
            }
            cout<<s<<"\n";
                      
}
return 0;
}
            
