#include<iostream>
#define ll long long int 
ll a[500001],i=0;
using namespace std;
/*int x(int c)
{
    if(c/2+c/3+c/4>c)
    return (x(c/2)+x(c/3)+x(c/4));
    else
    return c;
} */   

ll x1(ll c)
{
         if(c<=i)
         return a[c];
    else if(c/2+c/3+c/4>c)
    return (x1(c/2)+x1(c/3)+x1(c/4));
    else
    return c;
}
int main()
{int i;
for(i=1;i<=10000;i++)
a[i]=x1(i);
while(1){
cin>>i;
cout<<a[i]<<"\n";}
}     
