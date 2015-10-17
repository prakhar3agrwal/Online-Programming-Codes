#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
long long int  i,j,k,x,y,t,n,s,max,f;
scanf("%d",&t);
while(t--)
{
          scanf("%d",&n);
          vector <long long int> a;
          vector <long long int> b;
          i=0;
          while(i<n)
          {
                    scanf("%lld%lld",&x,&y);
                    a.push_back(x);
                    b.push_back(y);
                    i++;
          }
          sort(a.begin(),a.end());
          sort(b.begin(),b.end());
          k=0;s=0;max=0;
          for(i=0;i<n;i++)
          {
                          s=0;x=0;
                          for(j=0;j<n;j++)
                          {
                                          
                                          if(a[j]<=b[i])
                                          s++;
                                          else
                                          break;
                          }
                          for(k=0;k<i;k++)
                          if(b[k]<b[i])
                          x++;
                          s-=x;
                          max=max>s?max:s;
          }
          printf("%lld\n",max);
}
}                
