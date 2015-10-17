#include<iostream>
using namespace std;
int main()
{
long long int n,t,f,k,x,s;
cin>>x;
while(x--)
{
          cin>>n>>k>>t>>f;
          s=(f-n)/(k-1);
          cout<<s+f<<"\n";
}
}
