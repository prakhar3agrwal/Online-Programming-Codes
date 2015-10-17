#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int s,i,j,t,k,l,m,g,f,q=0;
char a[2000],b[2000];
scanf("%d",&t);
while(t--)
{
          q++;
          scanf("%d",&s);
          vector <string> x;
          vector <string> y;
          vector <string> z;
          j=0;
          for(i=0;i<s-1;i++)
          {
                            scanf("%s",&a);
                            x.push_back(a);
                            z.push_back(a);
                            scanf("%s",&a);
                            y.push_back(a);
                            z.push_back(a);
                            j+=2;
          }
          sort(z.begin(),z.end());
          k=1;f=0;g=0;
          for(i=1;i<j;i++)
          {
                          if(z[i]==z[i-1])
                          k++;
                          else if(k==1)
                          {
                               for(l=0;l<s-1;l++)
                               if(x[l]==z[i-1])
                               {
                                               m=l;
                                               f=1;
                                               break;
                               }  
                               if(f==1)
                               break;
                          }
                          else 
                          {
                               k=1;
                          }
          }if(f==0)
          l=s-2;
          printf("Scenario #%d:\n",q);
          cout<<x[l]<<"\n";g++;
          while(1)
          {
                  cout<<y[l]<<"\n";g++;
                  if(g<s)
                  {for(i=0;i<s-1;i++)
                  if(x[i]==y[l])
                  {
                                l=i;
                                break;
                  }}
                  else break;
          }
}
}
