#include<iostream>
#include<math.h>
using namespace std;
int main()
{
unsigned long long int num,r,x;
while(scanf("%llu",&num)!=EOF)
{
          x=int(sqrt(1+(8*num)));
          r=(x-1)/2;;
          if(x*x!=(1+(8*num)))
          r++;
          if(r+64>90)
          r%=26;
          cout<<"TERM "<<num<<" IS "<<char(r+64)<<"\n";
}
}
