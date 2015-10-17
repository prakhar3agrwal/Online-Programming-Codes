#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int a,b,c;
while(1)
{
        scanf("%d%d%d",&a,&b,&c);
        if(a==0 && b==0 && c==0)
        break;
        vector<int>d;
        d.push_back(a);
        d.push_back(b);
        d.push_back(c);
        sort(d.begin(),d.end());
        if((d[0]*d[0])+(d[1]*d[1])==d[2]*d[2])
        cout<<"right\n";
        else
        cout<<"wrong\n";
}
}
