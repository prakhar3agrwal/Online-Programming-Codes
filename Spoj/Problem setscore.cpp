#include<iostream>
using namespace std;
int main()
{
int n,p,t,min,max,i,j,s[10]={0},s1[10]={0},x1,x2,x3,min1,max1,k=0;
scanf("%d",&t);
while(t--)
{
          k++;
          scanf("%d%d",&n,&p);
          int a[n][p];max=max1=x1=x2=x3=0;min1=min=1000;
          for(i=0;i<n;i++)
          {
                          for(j=0;j<p;j++)
                          {
                                          scanf("%d",&a[i][j]);
                                          s[i]+=a[i][j];
                                          s1[j]+=a[i][j];
                          }
                          if(min>s[i])
                          min=s[i];
                          if(max<s[i])
                          max=s[i];
                          s[i]=0;
          }
          for(i=0;i<p;i++)
          {
                    if(min1>s1[i])
                    min1=s1[i];
                    if(max1<s1[i])
                    max1=s1[i];
                    s1[i]=0;
          }      
          if(min1>0)
          x1=1;
          if(min>0)
          x2=1;
          if(max<p)
          x3=1;
          cout<<"Case "<<k<<": "<<(x1*4)+(x2*2)+(x3*1)<<"\n";
}
}
                          
