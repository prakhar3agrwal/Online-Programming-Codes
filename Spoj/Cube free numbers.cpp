#include<iostream>
#include<vector>
#define max 1000000
int a[max+2];
using namespace std;
int main()
{
vector<bool>val(max+1,true);
int i,j,k,t,n;
scanf("%d",&t);
for(i=2;i<=100;i++)
{
                   k=i*i*i;
                   for(j=k;j<=max;j+=k)
                   val[j]=false;
}
j=0;
for(i=1;i<=max;i++)
{
     if(val[i]==false)
     j++;
     a[i]=j;
}   
j=0;
while(t--)
{
          j++;
          scanf("%d",&n);
          printf("Case %d: ",j);
          if(val[n]==false)
          printf("Not Cube Free\n");
          else
          printf("%d\n",n-a[n]);
}
}           
