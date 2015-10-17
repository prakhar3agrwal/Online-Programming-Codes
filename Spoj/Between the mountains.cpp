#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
long long int n,i,j,min,a,b,x,min1,pos;
scanf("%lld",&n);
while(n--)
{
         
          scanf("%lld",&a);
          vector <long long int> c;
          for(i=0;i<a;i++)
          {
                          scanf("%lld",&x);
                          c.push_back(x);
          }
          scanf("%lld",&b);
          vector <long long int> d;
          for(i=0;i<b;i++)
          {
                          scanf("%lld",&x);
                          d.push_back(x);
          }
          sort(c.begin(),c.end());
          sort(d.begin(),d.end());
          min1=min=2000000;pos=0;
          for(i=0;i<a;i++)
          {
                          min1=2000000;
                          for(j=pos;j<b;j++)
                          {
                                            
                                            x=((c[i]-d[j])>0)?(c[i]-d[j]):(d[j]-c[i]);
                                            if(x==0)
                                            {
                                                    min=0;
                                                    break;
                                            }
                                            if(min1>=x)
                                            {
                                                       min1=x;
                                                       pos=j;
                                            }
                                            else
                                            break;
                                            
                          }
                          if(min==0)
                          break;
                          min=min>min1?min1:min;
          }
          printf("%lld\n",min);
}
}
                          
