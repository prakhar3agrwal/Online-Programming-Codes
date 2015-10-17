#include<iostream>
#include<math.h>
using namespace std;
int main()
{
unsigned long long int n,x,i=0;
while(1)
{
        i++;
        scanf("%llu",&n);
        if(n==0)
        break;
        x=pow(n,(n-2));
        cout<<"Case "<<i<<", N = "<<n<<", # of different labelings = "<<x<<"\n";
}
}       
