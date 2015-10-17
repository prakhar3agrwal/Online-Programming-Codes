#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n,g1,g2,i,j,k,f1,f2;
string b[1000];
char c[4],d[4];
scanf("%d",&n);
while(n--)
{
          int a[1000]={0};
          k=0;f1=f2=0;
          for(i=0;i<16;i++)
          {
                           f1=f2=0;
                           cin>>c>>d>>g1>>g2;
                           for(j=0;j<k;j++)
                           {
                                           if(b[j]==c)
                                           {
                                                      if(a[j]==0 && g1<g2)
                                                      a[j]=-1;
                                                      f1=1;
                                                      break;
                                           }
                           }
                           if(f1==0)
                           {
                                    b[k]=c;
                                    if(g1<g2)
                                    a[k]=-1;
                                    k++;
                           }
                           for(j=0;j<k;j++)
                           {
                                           if(b[j]==d)
                                           {
                                                      if(a[j]==0 && g1>g2)
                                                      a[j]=-1;
                                                      f2=1;
                                                      break;
                                           }
                           }
                           if(f2==0)
                           {
                                    b[k]=d;
                                    if(g1>g2)
                                    a[k]=-1;
                                    k++;
                           }
          }
          for(i=0;i<k;i++)
          if(a[i]==0)
          {cout<<b[i]<<"\n";
          break;
          }
}
}
                           

