#include<iostream>
using namespace std;
int main()
{
int i,j,n,k,s,t;
cin>>n>>k>>s;
unsigned int x=0;
int a[n];
x=k*s;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
{
                  for(j=0;j<n-i-1;j++)
                  {
                                      if(a[j]<a[j+1])
                                      {
                                                     t=a[j];
                                                     a[j]=a[j+1];
                                                     a[j+1]=t;
                                      }
                  }
}s=0;i=0;
while(s<x)
{
          s+=a[i];
          i++;
}
cout<<i;
return 0;
}
