#include<iostream>
using namespace std;
int main()
{
int t,i,f1=0,bc[100];
char ab[100],abc;
cin>>t;
while(t--)
{
          f1=0;
          for(i=1;i<100;i++)
          cin>>bc[i]>>ab[i];
          abc=ab[9];
          for(i=18;i<=81;i+=9)
          {
                            if(ab[i]!=abc)
                            {
                                           f1=1;
                                           break;
                            }
          }
          if(f1==1)
          cout<<"NO\n";
          else
          cout<<"YES\n";
}
}
