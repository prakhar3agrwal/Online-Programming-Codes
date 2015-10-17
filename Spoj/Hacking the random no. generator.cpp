#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
int main()
{
int  n,k,i,d,s,num,x,j;
scanf("%d%d",&n,&k);
vector <int> a;
i=0;
while(i<n)
{
          scanf("%d",&num);
          a.push_back(num);
          i++;
} 
sort(a.begin(),a.end()); 
i=0;j=0;s=0;x=0;
while(i<n-1)
{
                  j=s+1;
                  while(j<n)
                  {
                                    if((a[j]-a[i])==k)
                                    {
                                    s=j;x++;
                                    break;
                                    }
                                    else if((a[j]-a[i])>k)
                                    {s=j-1;break;}
                                    j++;
                  }if(s==n-1)
                  break;i++;
}
printf("%d\n",x);
}

