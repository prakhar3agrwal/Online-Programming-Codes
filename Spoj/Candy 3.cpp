#include<iostream>
using namespace std;
int main()
{
unsigned long long  n,num,s,i,j,*a;
cin>>n;
for(i=0;i<n;i++)
{
                cout<<"\n";
                cin>>num;
                if(num==0)
                cout<<"YES\n";
                else{
                s=0;
                a=new unsigned long long[num];
                for(j=0;j<num;j++)
                {
                                  cin>>a[j];
                                  s=(s+a[j])%num;
                }
                if(s==0)
                cout<<"YES\n";
                else cout<<"NO\n";
                delete a;
}}
 return 0;
}               
