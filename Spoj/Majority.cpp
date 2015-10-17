#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
unsigned long long int n,x,y,max,num,t,i;
scanf("%llu",&t);
while(t--)
{
          scanf("%llu",&n);
          vector <unsigned long long int> a;
          i=0;
          while(i<n)
          {
                     scanf("%llu",&x);
                     a.push_back(x);
                     i++;
          }
          sort(a.begin(),a.end());
          y=1;max=num=0;
          i=1;
          while(i<n)
          {
                          if(a[i]==a[i-1])
                          y++;
                          else
                          {
                              if(y>max)
                              {
                                       max=y;
                                       num=a[i-1];
                              }    
                              y=1;
                          }
                          i++;
          }
          if(y>max)
                              {
                                       max=y;
                                       num=a[i-1];
                              }
                              if(max>n/2)
                              printf("YES %llu\n",num);
                              else
                              printf("NO\n");
} 
}  
