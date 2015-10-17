#include<iostream>
using namespace std;
int main()
{
int N,x,y,i;
cin>>N;
for(i=0;i<N;i++)
{
                cin>>x>>y;
                if((x+y)%2==0 && x>=0 && y>=0 && (x-y==2 || x-y==0))
                {
                              if(x%2==0 && y%2==0)
                              cout<<x+y<<"\n";
                              else
                              cout<<x+y-1<<"\n";
                }
                else
                cout<<"No Number\n";
}
return 0;
}
