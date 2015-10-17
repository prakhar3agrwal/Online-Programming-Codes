#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
unsigned long long int i,n,j,s=0,a[100000],b[100000];
while(1)
{
        scanf("%llu",&n);
        s=0;
        if(n==0)
        break;
        for(i=0;i<n;i++)
        scanf("%llu",&a[i]);
        for(i=0;i<n;i++)
        scanf("%llu",&b[i]);
        sort(a,a+n);
        sort(b,b+n);
        i=0;j=n-1;
        while(n--)
        {
                  s+=a[i]*b[j];
                  i++;j--;
        }
        printf("%llu\n",s);
}
}


