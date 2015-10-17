#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
int n,m,i,s;

char x[200000];
while(1)
{
        
        scanf("%d%d",&n,&m);
        if(n==0 && m==0)
        break;
        int b[20000]={0};
        vector <string> a;
        for(i=0;i<n;i++)
        {
              scanf("%s",&x);
              a.push_back(x);
        }
        sort(a.begin(),a.end());
        s=1;
        for(i=1;i<n;i++)
        {
               if(a[i]==a[i-1])
               s++;
               else
               {
                   b[s-1]++;
                   s=1;
               }
        }
        b[s-1]++;
        for(i=0;i<n;i++)
        printf("%d\n",b[i]);
}     
}              
