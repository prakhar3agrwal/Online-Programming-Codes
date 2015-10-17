#include<stdio.h>
main()
{
int i,j,k,n,t,m,a[55][1010],x;
scanf("%d",&t);
while(t--)
{
       scanf("%d%d",&k,&m);
       int b[m+1][2],c[1001]={0};
       for(i=1;i<=m;i++)
       scanf("%d%d",&b[i][0],&b[i][1]);
       for(i=1;i<=k;i++)
       if(i>=b[m][0])
       a[m][i]=b[m][1];
       else
       a[m][i]=0;
       for(i=m-1;i>0;i--)
       {
                         for(j=1;j<=k;j++)
                         {
                                          if(j>=b[i][0])
                                          {
                                                        a[i][j]=a[i+1][j]>(a[i+1][j-b[i][0]]+b[i][1])?a[i+1][j]:(a[i+1][j-b[i][0]]+b[i][1]);
                                          }
                                          else
                                          a[i][j]=a[i+1][j];
                         }
       }
       x=k;
       for(i=1;i<=m-1;i++)
       if(a[i][x]==a[i+1][x])
       c[i]=0;
       else
       {
           c[i]=1;
           x-=b[i][0];
       }
       if(a[m][x]>0)
       c[m]=1;
       else if(a[m][x]<=0)
       c[m]=0;
       x=0;
       for(i=1;i<=m;i++)
       if(c[i]==1)
       x+=b[i][1];
       printf("Hey stupid robber, you can get %d.\n",x);
}
return 0;
}   
