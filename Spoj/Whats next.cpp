#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,r;
while(1)
{
cin>>a>>b>>c;
if(a==b && b==c &&c==0)
break;
if(b-a==c-b)
cout<<"AP "<<c+(b-a)<<"\n";
else
cout<<"GP "<<c*(b/a)<<"\n";
}
return 0;
}
