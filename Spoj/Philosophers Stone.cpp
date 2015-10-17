#include<stdio.h>
int main()
{
int n,m,i,j,k,min,t;
scanf("%d",&t);
while(t--){
scanf("%d%d",&n,&m);
int a[n][m];
for(i=0;i<n;i++)
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
for(i=1;i<n;i++)
{
         for(j=0;j<m;j++)
         {
                         if(j==0)
                         min=a[i-1][j]<a[i-1][j+1]?a[i-1][j+1]:a[i-1][j];
                         else if(j==m-1)
                         min=a[i-1][j]<a[i-1][j-1]?a[i-1][j-1]:a[i-1][j];
                         else
                         {
                             min=a[i-1][j-1]<a[i-1][j]?a[i-1][j]:a[i-1][j-1];
                             min=min<a[i-1][j+1]?a[i-1][j+1]:min;
                         }
                         a[i][j]+=min;
         }
}
min=a[n-1][0];
for(i=1;i<m;i++)
min=min<a[n-1][i]?a[n-1][i]:min;
printf("%d\n",min);
}
return 0;
}        
