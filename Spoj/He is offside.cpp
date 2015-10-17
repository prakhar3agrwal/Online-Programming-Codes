#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int a,d,x;
while(1)
{
        cin>>a>>d;
        if(a==0 && d==0)
        break;
        vector <int> b;
        while(a--)
        {
                  scanf("%d",&x);
                  b.push_back(x);
        }
        sort(b.begin(),b.end());
        vector <int> c;
        while(d--)
        {
                  scanf("%d",&x);
                  c.push_back(x);
        }
        sort(c.begin(),c.end());
        if(b[0]<c[1])
        cout<<"Y\n";
        else
        cout<<"N\n";
        
 
}
}
