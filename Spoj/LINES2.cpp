#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
main()
{
int i,j,k,y,x,n,n1;
scanf("%d%d",&n,&k);
vector<int>a;
vector<int>b;
n1=n;
while(n1--)
{
                scanf("%d%d",&x,&y);
                a.push_back(x);
                b.push_back(y);
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
while(k--)
{
          scanf("%d",&x);y=0;
          if(a[0]>x)
          i=0;
          else if(a[n-1]<=x)
          i=n;
          else 
          {
               j=n-1;
               while(j>=0){
               if(a[j]<=x)
               break;j--;}
               i=j;
          }
          y-=n-i;
          if(b[0]>=x)
          i=0;
          else if(b[n-1]<x)
          i=n;
          else 
          {
               j=n-1;
               while(j>=0){
               if(a[j]<=x)
               break;j--;}
               i=j;
          }
          y+=n-i;
          printf("%d\n",y);
}
}
