#include<iostream>
using namespace std;
int main()
{
int b,g,x,y;
while(1)
{
        cin>>b>>g;
        if(b==g && g==-1)
        break;
        else
        {
            if(b==0)
            cout<<g<<"\n";
            else if(g==0)
            cout<<b<<"\n";
            else
            {
                x=b>g?g:b;
                y=b>g?b:g;
                if((b==1 && g!=1 )||(g==1 && b!=1))
                {
                         if(g%2==0 || b%2==0)
                         cout<<y/2<<"\n";
                         else
                         cout<<y/2+1<<"\n";
                }
                else if(y-x==1|| y==x)
                cout<<"1\n";
                else if(y%(x+1)==0)
                cout<<y/(x+1)<<"\n";
                else
                cout<<y/(x+1)+1<<"\n";
            }
        }
}
return 0;
}
