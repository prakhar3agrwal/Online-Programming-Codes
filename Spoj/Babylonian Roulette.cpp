#include<iostream>
using namespace std;
int main()
{
long long int a,b,c;
while(1)
{
        cin>>a>>b>>c;
        if(a==0 && b==0)
        break;
        if(c>a)
        a=c-a;
        else
        a-=c;
        if(a%b!=0)
        cout<<"No accounting tablet\n";
        else
        {
            a/=b;
            if(a%3==0)
            a/=3;
            else
            a=(a/3)+1;
            cout<<a<<"\n";
        }
}
}
