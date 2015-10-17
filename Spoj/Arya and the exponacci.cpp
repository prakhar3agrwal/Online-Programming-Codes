#include<stdio.h>
#define max 1000000
#define x 1000000007
long long int a[max+1];
int main()
{
int i,t,n;
a[0]=1,a[1]=2;
scanf("%d",&t);
for(i=2;i<=max;i++)
a[i]=(a[i-1]*a[i-2])%x;
while(t--)
{
          scanf("%d",&n);
          printf("%d\n",a[n]);
}return 0;
}
