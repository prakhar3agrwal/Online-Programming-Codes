#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
long long int k,t,n,h,x,g,i,j;

scanf("%lld",&t);
while(t--)
{
          scanf("%lld%lld",&n,&k);
          vector < long long int > a;
          i=0;
          while(i<n)
          {
          cin>>h;
          a.push_back (h);
          i++;
          }
          if(k==1)
          cout<<"0\n";
          else{
          sort(a.begin(),a.end());
          g=a[k-1]- a[0];
          for(i=1;i<n;i++)
          {
                              if((i+k-1)>(n-1))
                              break;
                              x=a[i+k-1]-a[i];
                              if(x<g)
                              g=x;
                              
                           
          }
          printf("%lld\n",g);
          }
          }
}

