#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
double a[4],b,c,d,area,s=0,s1=1;
int t,i;
scanf("%d",&t);
while(t--)
{
          s1=1;s=0;
          for(i=0;i<4;i++)
          {
                          cin>>a[i];
                          s+=a[i];
          }
          s/=2.0;
          for(i=0;i<4;i++)
          {
                          s1*=(s-a[i]);
          }
          s1=sqrt(s1);
          printf("%0.2f\n",s1);
}
}
