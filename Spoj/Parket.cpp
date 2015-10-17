#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int r,b,x,l,br;
cin>>r>>b;
x=int(sqrt((pow((r+4),2))-16*(r+b)));
l=((r+4)+x)/4;
br=(r+b)/l;
if(l>br)
cout<<l<<" "<<br;
else
cout<<br<<" "<<l;
}
