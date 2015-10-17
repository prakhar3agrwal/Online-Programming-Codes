#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int n,m,i,j,k=0,x;
scanf("%d",&n);
k+=n;
i=0;
vector<int >a;
while(i<n)
{
          scanf("%d",&x);
       a.push_back(x);
       scanf("%d",&m);
       k+=m;
       while(m--)
       {
                 scanf("%d",&x);
                 a.push_back(x);
       }
       i++;
}
sort(a.begin(),a.end());
j=1;
for(i=0;i<k-1;i++)
{
                if(a[i]!=a[i+1])
                j++;
}
cout<<j-n;
}
