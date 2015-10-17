#include<stdio.h>
#define max 1024
int a[max];
main()
{
long long int sol=0,two,n2;
int i,j,k,n;
char n1[100];
scanf("%d",&n);
while(n--)
{
          int x[10]={0};
          scanf("%s",&n1);
          i=0;
          while(n1[i]!='\0')
          {
                     x[n1[i]-48]=1;
                     i++;
          }
          two=1,n2=0;
          for(i=0;i<10;i++)
          {
                           n2+=two*x[i];
                           two<<=1;
          }
          a[n2]++;
}
for(i=0;i<1024;i++)
{
                   for(j=i+1;j<1024;j++)
                   {
                                        if(i&j)
                                        sol+=a[i]*a[j];
                   }
}
for(i=0;i<1024;i++)
sol+=(a[i]*(a[i]-1))/2;
printf("%lld\n",sol);
//memset(a,0,sizeof(a));
}
