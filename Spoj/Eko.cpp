#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int n,i,j;
long int m,s,low,high,mid;
scanf("%d%ld",&n,&m);
vector<int>a;
for(i=0;i<n;i++)
{
                scanf("%d",&j);
                a.push_back(j);
}
sort(a.begin(),a.end());
low=a[0],high=a[n-1],mid=(low+high+1)/2;
while(low<=high)
{
        s=0;
        for(i=n-1;i>=0;i--)
        {
                           if(a[i]>mid)
                           s+=(a[i]-mid);
                           else
                           break;
        }
        if(s==m)
        break;
        else if(s>m)
        low=mid+1;
        else if(s<m)
        high=mid-1;
        mid=(low+high+1)/2;
}
printf("%ld\n",mid);
}
        

