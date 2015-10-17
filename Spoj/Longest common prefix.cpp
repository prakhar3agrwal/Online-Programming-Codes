#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[700000],c,d[700000];
long int i,j,k,m,l,n,q,s,z,x,p;
cin>>n;
while(n--)
{
          cin>>a;
          l=strlen(a);
          cin>>q;
          while(q--)
          {
                  cin>>c>>i;
                  if(c=='Q')
                  {
                            cin>>j;
                            s=0;
                            for(k=i-1,m=j-1;k<l,m<l;k++,m++)
                            {
                                                     if(a[k]==a[m])
                                                     s++;
                                                     else
                                                     break;
                            }
                            cout<<s<<"\n";
                  }
                  else
                  {
                      cin>>d;
                      if(c=='R')
                      a[i-1]=d[0];
                      else if(c=='I')
                      {
                          for(k=l;k>i;k--)
                          a[k]=a[k-1];
                          a[k]=d[0];
                          l++;
                          a[l]='\0';
                      }
                  }
          }
}
}
