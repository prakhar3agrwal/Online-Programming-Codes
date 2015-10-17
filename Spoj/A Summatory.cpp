#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{
int j,t,n;
unsigned long long int s,g,i;
vector<unsigned long long int>a;
scanf("%d",&t);
a.push_back(1);
s=g=1;
for(i=2;i<=1000000;i++)
{
         g+=i*i*i;
         //if(g>1000000003)
         g%=1000000003;  
         s=(s+g)%1000000003;
         a.push_back(s);
}            
while(t--)
{
          s=g=1;
          scanf("%d",&n);
          printf("%llu\n",a[n-1]);
}
}

