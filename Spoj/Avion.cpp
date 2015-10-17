#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
int i,l=0,j,s;
char a[5][100];
for(i=0;i<5;i++)
cin>>a[i];
s=0;
for(i=0;i<5;i++)
{
                l=strlen(a[i]);
                j=0;
                while(j<l) 
                {
                           if(a[i][j]=='F' && a[i][j+1]=='B' && a[i][j+2]=='I')
                           {
                                           cout<<i+1<<" ";
                                           s++;
                                           break;
                           }
                           j++;
                }
}
if(s==0)
cout<<"HE GOT AWAY!\n";
}
