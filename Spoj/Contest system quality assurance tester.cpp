#include<iostream>
using namespace std;
int main()
{
long int i,j=0,a[3],b[3],x=0,s=0;
while(scanf("%ld",&a[0])!=EOF)
{
s=x=0;j++;
for(i=1;i<3;i++)
cin>>a[i];
for(i=0;i<3;i++)
cin>>b[i];
for(i=0;i<3;i++)
{
                if(a[i]!=0)
                {
                           s++;
                           x+=(b[i]-1)*20*60+a[i];
                }
}
cout<<"team "<<j<<": "<<s<<", "<<x<<"\n";
}
}
