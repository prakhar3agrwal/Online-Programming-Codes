#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n,i,j,b[10],m=0,in,g,k;
cin>>n;
char a[n][10][110];
while(n--)
{
          i=10;
          while(i--)
          {
                    cin>>a[n][i]>>b[i];
          }
          cout<<"Case #"<<m+1<<":\n";
          i=9;g=b[9];in=9;
           while(i>=0)
          {
               if(b[i]>g)
               {
                            g=b[i];
                            in=i;
                            
               }
               i--;
          }
          k=in-1;
          cout<<a[n][in]<<"\n";
           while(k>=0)
          {
                     if(b[k]==g)
                     {
                               
                                cout<<a[n][k]<<"\n";
                     }
                     
                     k--;
          }
          m++;
}
return 0;
}
