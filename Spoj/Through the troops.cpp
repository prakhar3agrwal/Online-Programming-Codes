#include<iostream>
using namespace std;
int main()
{
int i,j,x,t,n;
scanf("%d",&t);
while(t--)
{
         scanf("%d",&n);
         int a[n][3];
         for(i=0;i<n;i++)
         {
                         for(j=0;j<3;j++)
                         scanf("%d",&a[i][j]);
         }
         for(i=1;i<n;i++)
         {
                         for(j=0;j<3;j++)
                         {
                                         if(j==0)
                                         x=a[i-1][2]>a[i-1][1]?a[i-1][1]:a[i-1][2];
                                         else if(j==1)
                                         x=a[i-1][0]>a[i-1][2]?a[i-1][2]:a[i-1][0];
                                         else if(j==2)
                                         x=a[i-1][0]>a[i-1][1]?a[i-1][1]:a[i-1][0];
                                         a[i][j]+=x;
                         }
         }x=a[n-1][0];
         for(i=1;i<3;i++)
         x=x>a[n-1][i]?a[n-1][i]:x;
         printf("%d\n",x);
}
}
