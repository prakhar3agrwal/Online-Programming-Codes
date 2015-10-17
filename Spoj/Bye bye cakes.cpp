#include<iostream>
using namespace std;
int main()
{
int a[8],l,i,x;
while(1)
{
        for(i=0;i<8;i++)
        cin>>a[i];
        if(a[0]==-1)
        break;
        l=0;
        for(i=0;i<4;i++)
        {
                        if(a[i]%a[i+4]!=0)
                        x=a[i]/a[i+4]+1;
                        else
                        x=a[i]/a[i+4];
                        if(x>l)
                        l=x;
        }
        for(i=0;i<4;i++)
        {
                        x=l*a[i+4]-a[i];
                        cout<<x<<" ";
        }
        cout<<"\n";
}
}
