#include<iostream>
using namespace std;
int main()
{
int a[4],b[4],i,x,n=10;
for(i=0;i<4;i++)
a[i]=1;
while(n--)
{
          for(i=0;i<4;i++)
          cout<<a[i]<<" ";
          cout<<endl;
          for(i=0;i<4;i++)
          cin>>b[i];
          for(i=0;i<4;i++)
          {
                          if(b[i]==1)
                          x++;
                          else if(b[i]==-1)
                          a[i]++;
          }
          if(x==4)
          break;
}
}
