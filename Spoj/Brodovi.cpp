#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
unsigned long long int n,i,s,x,y,j;
scanf("%llu",&n);
vector <unsigned long long int> a;
y=0;i=s=0;
while(i<n)
{
          scanf("%llu",&x);
          a.push_back(x-1);
          i++;
}
sort(a.begin(),a.end());
int b[10000]={0};
for(i=1;i<n;i++)
{
                for(j=i+1;j<n;j++)
                {
                                  if(b[j]==0 && a[j]%a[i]==0)
                                  b[j]=1;
                }
}
for(i=1;i<n;i++)
if(b[i]==0)
s++;
printf("%llu\n",s);
}

