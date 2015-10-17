#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[501],b[501];
int i,j,l,x;
while(1)
{
        cin>>a>>b;
        if(a[0]=='*' && b[0]=='*')
        break;
        i=0;
        l=strlen(a);x=0;
        while(i<l)
        {
                  if(a[i]!=b[i])
                  {
                                while(a[i]!=b[i])
                                i++;
                                x++;
                  }
                  else
                  i++;
        }
        cout<<x<<"\n";
}
}
