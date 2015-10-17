#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t,i,j,n,k,l,m=0;
scanf("%d",&t);
vector< int > a;
a.push_back(1);
i=0,j=1,k=2;
while(j<=1000000)
{
                 for(l=0;l<a[i];l++)
                 {
                   a.push_back(k);
                   j++;
                 }
                 i++;
                 k++;
}
while(t--)
{
          scanf("%d",&n);
          m++;
          printf("Case #%d: %d\n",m,a[n-1]); 
}
}                
