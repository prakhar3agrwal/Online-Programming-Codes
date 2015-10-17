#include<iostream>
#include<vector>
#include<math.h>
int x1=0;
using namespace std;
#define LL long long
struct node
{
LL all_sm;
LL lft_sm;
LL rght_sm;
LL mx_sm;
}a[1000008];
int N;

int arr[100004];
void initialize(int ind,int start,int end)
{
if( start==end)
{
a[ind].mx_sm=arr[start];
}
else
{
int mid=(start+end)/2;
initialize(ind*2,start,mid);
initialize(ind*2+1,mid+1,end);
a[ind].mx_sm=(min(a[ind*2].mx_sm,a[ind*2+1].mx_sm));
}
}
node query(int ind,int i,int j,int start,int end)
{
if(i<=start&&j>=end)
return a[ind];
int mid=(start+end)/2;
if(j<=mid)
return query(ind*2,i,j,start,mid);
else if(i>mid)
return query(ind*2+1,i,j,mid+1,end);
else
{
node p1,p2,p3;
p1=query(ind*2,i,j,start,mid);
p2=query(ind*2+1,i,j,mid+1,end);
p3.mx_sm=(min(p1.mx_sm,p2.mx_sm));
return p3;
}
}
int main()
{
int n,t,ma;
scanf("%d",&t);
while(t--)
{
x1++;
scanf("%d%d",&n,&ma);
N=n;
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);

initialize(1,0,n-1);
for(int i=0;i<ma;i++)
{
int x,y;
scanf("%d %d",&x,&y);
if(i==0)
printf("Scenario #%d:\n\n",x1);
printf("%lld\n", query(1,x-1, y-1,0,n-1).mx_sm);
}
}
return 0;
}
