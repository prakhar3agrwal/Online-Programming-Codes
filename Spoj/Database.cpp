#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int t,n,i,j,k,l,z=0,x,y,f;
scanf("%d",&t);
while(t--)
{
          scanf("%d%d",&n,&l);
          z++;f=0;
          vector <vector <int> > a(n+1);
          for(i=0;i<l;i++)
          {
                          scanf("%d%d",&x,&y);
                          a[x-1].push_back(y);
          }
          for(i=0;i<n;i++)
          sort(a[i].begin(),a[i].end());
          for(i=0;i<n;i++)
          {
                          for(j=1;j<a[i].size();j++)
                          if(a[i][j]==a[i][j-1])
                          {
                                                f=1;
                                                break;
                          }
                          if(f==1)
                          break;
          }
          if(f==1)
          printf("Scenario #%d: impossible\n",z);
          else 
          printf("Scenario #%d: possible\n",z);
}
}
