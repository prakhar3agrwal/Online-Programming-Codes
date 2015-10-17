#include<stdio.h>
#define max 100000000
char a[max+1];
main()
{
int i,j,n,s,k;
i=1;
while(i<=max)
{
             a[i]=1;
             j=i;s=0;
             while(j>0)
             {
                       i+=j%10;
                       j/=10;
             }
}
i=3;
while(i<=max)
{
             a[i]=3;
             j=i;s=0;
             while(j>0)
             {
                       i+=j%10;
                       j/=10;
             }
}
i=9;
while(i<=max)
{
             a[i]=9;
             j=i;s=0;
             while(j>0)
             {
                       i+=j%10;
                       j/=10;
             }
}
scanf("%d",&n);
while(n--)
{
          scanf("%d",&k);
          i=k;
while(a[i]==0)
{
             j=i;s=0;
             while(j>0)
             {
                       i+=j%10;
                       j/=10;
             }
}
printf("%d %d\n",a[i],i);
}
return 0;
}
