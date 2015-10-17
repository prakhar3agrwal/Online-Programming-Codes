#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,i,j,s=0,x;
cin>>n;
s=n;
if(n>=4)
{
        i=4;
        while(i<=n)
        {
        x=sqrt(i);
        for(j=2;j<=x;j++)
        {
                        if(i%j==0)
                        s++;
        }
        if(j*j==i)
        s++;
        i++;
        }
}
cout<<s<<"\n";
return 0;
}
      
        
