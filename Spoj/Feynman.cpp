#include<iostream>
using namespace std;
int main()
{
long long int s=0;
int i,n;
while(1)
{
        s=1;
        cin>>n;
        if(n==0)
        break;
        
        else
        {
            if(n>1)
            {
                   while(n>1)
                   {
                             s+=n*n;
                             n--;
                   }
            }
        }
        cout<<s<<"\n";
}
return 0;
}
