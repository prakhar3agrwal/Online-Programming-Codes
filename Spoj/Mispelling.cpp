#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
int i,j,l,d,m,n,k=0;
char a[85];
cin>>n;
n++;
while(n--)
{
                gets(a);
                l=strlen(a);
                m=0;
                j=0;
                while(a[j]!=' ')
                {
                              i=a[j];
                              i-=48;
                              j++;
                              m=10*m+i;
                }
                if(m<10)
                d=1;
                else d=2;
                if(k!=0)
                cout<<k;
                for(j=d;j<l;j++)
                {
                                if(j!=d+m)
                                cout<<a[j];  
                }
                cout<<"\n";
                k++;
}
return 0;
}
