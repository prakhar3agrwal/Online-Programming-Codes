#include<iostream>
#include<string.h>
#define max 2001
int a[max][max];
using namespace std;
int main()
{
char x[2002],y[2002];
int i,j,k,d,t,l1,l2,g,f;
scanf("%d",&t);
while(t--)
//for(t=0;t<10;t++)
{
         scanf("%s%s",&x,&y);
         l1=strlen(x),l2=strlen(y);
         for(i=0;i<=2000;i++)
         a[i][0]=a[0][i]=i;
         for(i=1;i<=l1;i++)
         for(j=1;j<=l2;j++)
         {
                            a[i][j]=min((a[i-1][j-1]+(x[i-1]!=y[j-1])),(a[i-1][j]+1));
                           a[i][j]=min(a[i][j],(a[i][j-1]+1));
                           
         
         }       
         printf("%d\n",a[l1][l2]);
         memset(a,0,sizeof(a));
}
}       
