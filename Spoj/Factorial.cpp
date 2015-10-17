#include<iostream>
using namespace std;
int main()
{
unsigned int num,z,n,x;
int i,j;
cin>>n;
for(i=0;i<n;i++)
{
                cin>>num;
                z=0;
                while(num>0)
                {
                               x=num/5;
                               z+=x;
                               num/=5;
                }
               cout<<z<<"\n";
                
               
}
return 0;
}
