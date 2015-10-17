#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
long int i,x,j=0;
while(1)
{
        if(scanf("%ld",&x)==EOF)
        break;
        j++;
        vector<long int> a;
        a.push_back(x);
        for(i=0;i<3;i++)
        {
                        scanf("%ld",&x);
                        a.push_back(x);
        }
        sort(a.begin(),a.end());
        printf("Case %ld: %ld\n",j,a[3]+a[2]);
}
}
