#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int i,j,x,n,b,f;
while(1)
{
        scanf("%d%d",&n,&b);
        if(n==0)
        break;
        vector <int >a;int y[91]={0};f=0;
        for(i=0;i<b;i++)
        {
                        scanf("%d",&x);
                        a.push_back(x);
                        y[x]=1;
        }
        sort(a.begin(),a.end());
        for(i=0;i<b-1;i++)
        {
                   for(j=i+1;j<b;j++)
                   y[a[j]-a[i]]=1;
        }
        for(i=0;i<=n;i++)
        if(y[i]==0)
        {
                   f=1;
                   break;
        }
        if(f==1)
        printf("N\n");
        else
        printf("Y\n");
}
}                        


