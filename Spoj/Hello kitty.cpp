#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n,i,j,l,k,x;
char a[100];
while(1)
{
        cin>>a;
        if(a[0]=='.')
        break;
        
        else
        {
            cin>>n;
        l=strlen(a);
        x=l*n;
        for(i=0;i<l;i++)
        {
                          j=i;
                          for(k=0;k<x;k++)
                          {
                                          cout<<a[j%l];
                                          j++;
                          }
                          cout<<"\n";
        }
}}
return 0;
}  
