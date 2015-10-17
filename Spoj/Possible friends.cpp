#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int t,i,l,j,k,x,in,m;
char a[51][51];
scanf("%d",&t);
while(t--)
{
          for(i=0;;i++)
          {
                       cin>>a[i];
                       l=strlen(a[0]);
                       if(i==l-1)
                       break;
          }
          int b[50][50]={0};
          for(i=0;i<l;i++)
          {
                          b[i][i]=-1;
                          for(j=0;j<l;j++)
                          if(a[i][j]=='Y')
                          b[i][j]=-1;
          }in=0;m=0;
           for(i=0;i<l;i++)
           {
                           x=0;
                           for(j=0;j<l;j++)
                           {
                                           if(i!=j && b[i][j]==-1)
                                           {
                                               for(k=0;k<l;k++)
                                               {
                                                               if(j!=k && b[j][k]==-1 && b[i][k]==0)
                                                               {
                                                                       b[i][k]=1;
                                                                       x++;
                                                               }
                                               }
                                           }
                           }
                           if(x>m)
                           {
                                  m=x;
                                  in=i;
                           }
           }
           cout<<in<<" "<<m<<"\n";
}  
}                            
