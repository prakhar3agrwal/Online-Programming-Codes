#include<iostream>
using namespace std;
int main()
{
int i,j,n,k,x,p,s,a[65536];
while(1)
{
        scanf("%d%d",&n,&k);
        if(n==0)
        break;
        s=0;
        p=1<<n-1;
        x=1<<n;
        for(i=0;i<p;i++)
        a[i]=0;
        for(i=0;i<n;i++)
        a[i+p]=1;
        for(i=k;i<k+n;i++)
        {
             s+=a[i%x]*p;
             p=p>>1;
        }
        printf("%d\n",s);
}
}             
