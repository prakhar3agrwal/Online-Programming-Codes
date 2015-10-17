#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int n,i,h,t,f,x;
while(1)
{
          cin>>t;f=0;
          if(t==0)
          break;
          vector <int> a;
          for(i=0;i<t;i++)
          {
                          cin>>h;
                          a.push_back(h);
          }
          sort(a.begin(),a.end());
          if((a[0]-0)>200)
          f=1;
          if(f==0){
          for(i=0;i<t-1;i++)
          {
                          x=a[i+1]-a[i];
                          if(x>200)
                          {
                                   f=1;
                                   break;
                          }
          }}
          if(f==0)
          {
                x=1422-a[t-1];
                if(2*x>200)
                f=1;
          }
          if(f==1)
          cout<<"IMPOSSIBLE\n";
          else
          cout<<"POSSIBLE\n";
}
}
