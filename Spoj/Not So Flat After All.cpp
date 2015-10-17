#include<iostream>
#include<vector>
#include<algorithm>
#define max 1000000
bool a[max];
using namespace std;
int main()
{
long long int i,j;
int x,y,x1,y1,s,q1,q2,k=0;
vector < int >b;
for(i=2;i<=max/2;i++)
{
                     if(a[i]==false)
                     {
                                    for(j=i*i;j<=max;j+=i)
                                    a[j]=true;
                     }
}
for(i=2;i<max;i++)
if(a[i]==0)
b.push_back(i);
while(1)
{
        scanf("%d%d",&x,&y);
        if(x==0 && y==0)
        break;
        k++;
        vector< int > c;
        vector< int > d;
        vector< int > e;
        vector< int > f;
        x1=x;y1=y;i=0;
        while(x1>1)  
        {
                     if(x1%b[i]==0)
                     {
                                   e.push_back(b[i]);
                                   c.push_back(b[i]);
                                   x1/=b[i];
                     }
                     else
                     i++;
        }
        i=0;
        while(y1>1)  
        {
                     if(y1%b[i]==0)
                     {
                                   f.push_back(b[i]);
                                   c.push_back(b[i]);
                                   y1/=b[i];
                     }
                     else
                     i++;
        }
        sort(c.begin(),c.end()); 
        sort(e.begin(),e.end());
        sort(f.begin(),f.end()); 
        s=1;
        d.push_back(c[0]);
        for(i=1;i<c.size();i++)
        if(c[i]!=c[i-1])
        d.push_back(c[i]);
        s=0;i1=j1=0;
        for(i=0;i<d.size();i++)
        {
                               q1=q2=0;
                               for(j=i1;j<e.size();j++)
                               if(d[i]==e[j])
                               q1++;
                               for(j=j1;j<f.size();j++)
                               if(d[i]==f[j])
                               q2++;
                               s+=q1>q2?(q1-q2):(q2-q1);
        }q1=d.size();
        printf("%d. %d:%d\n",k,q1,s);
}         
}
