#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int n,k,d,i,j;
scanf("%d%d",&n,&k);
vector <int > a(n+1);
vector <int > b(n);
for(i=0;i<k;i++)
{
                scanf("%d%d",&j,&d);
                a[j-1]++;
                a[d]--;
}
d=0;
for(i=0;i<n;i++)
{
                d+=a[i];
                b[i]=d;
}
sort(b.begin(),b.end());
printf("%d\n",b[n/2]);
}              
