#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
long int n,i,x,f,y;
while(1)
{
    scanf("%d",&n);  
    if(n==0)
    break;
    f=0;  
    vector < long int > a;
    vector < long int > b;
    vector < long int > c;
    for(i=0;i<n;i++)
    {
                                    scanf("%ld%ld",&x,&y);
                                    a.push_back(x);
                                    b.push_back(0);
                                    c.push_back(y);
    }
    for(i=0;i<n;i++)
    {
                                   if((c[i]+i)<0 || (c[i]+i)>=n)
                                   {
                                                    f=1;
                                                    break;
                                   }
                                   else if(b[c[i]+i]!=0 )
                                   {
                                        f=1;
                                                    break;
                                   }
                                   b[c[i]+i]=a[i];
    }

   if(f!=1)
    for(i=0;i<n;i++)
     if(b[i]==0)
     {
                f=1;
                break;
     }
    if(f==1)
    printf("-1");
    else
    for(i=0;i<n;i++)
    printf("%ld ",b[i]);
    printf("\n");
}
}


