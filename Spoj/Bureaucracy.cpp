#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#define Max 10000002
int c[Max],b[Max];
using namespace std;
long int haha()
{
     char z[100];
     long int x=0;
     int i=0;
     gets(z);
    
     while(z[i]!='\0')
     {
                      x=x*10+(z[i]-48);
                      i++;
     }
     return x;
}
int main()
{
int i,j,k=0;
long int t,n;
t=haha();
char a[100002][10];
while(t--)
{
          n=haha();if(n!=0){
          vector<int>x;
          for(i=1;i<=n;i++)
          {
                          scanf("%s",&a[i]);
                          if(strcmp(a[i],"cancel")==0)
                          scanf("%d",&b[i]);
          }
          for(i=n;i>=1;i--)
          {
              if(c[i]==0)
              {x.push_back(i);
              if(strcmp(a[i],"cancel")==0)
              {c[b[i]]=1;}}
          }
          printf("%d\n",x.size());
          for(i=x.size()-1;i>=0;i--)
          printf("%d ",x[i]);
          printf("\n");
          memset(c,0,sizeof(c));}else t++;
}
}
              
