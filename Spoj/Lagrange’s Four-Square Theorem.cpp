#include<stdio.h>
#define max 32768
int a[max];
int main()
{
int i,j,k,l,t;
for(i=0;4*i*i<=max;i++)
{
  for(j=i;3*j*j<=max;j++)
  {
      for(k=j;2*k*k<=max;k++)
      {
          for(l=k;i*i+j*j+k*k+l*l<=max;l++)
          a[i*i+j*j+k*k+l*l]++;
      }
  }
}
while(scanf("%d",&i)!=EOF)
{
          if(i==0)
          break;
          printf("%d\n",a[i]);
}
return 0;
}
