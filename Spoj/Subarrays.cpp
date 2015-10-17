#include<stdio.h>
#define x printf("%d ",
#define c 1000000
int a[c+1];
int main()
{
int i,n,k,max1=-1,j=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);
for(i=0;i<k;i++)
max1=max1>a[i]?max1:a[i];
printf("%d ",max1);
for(i=1;i<n-k+1;i++)
{
                    if(a[i-1]!=max1)
                    max1=max1>a[i+k-1]?max1:a[i+k-1];
                    else 
                    {
                         max1=-1;
                         for(j=i;j<i+k;j++)
                         max1=max1>a[j]?max1:a[j];
                    }
                    if(i==n-k)
                    break;
                    x max1);
}
printf("%d\n",max1);
return 0;
}

