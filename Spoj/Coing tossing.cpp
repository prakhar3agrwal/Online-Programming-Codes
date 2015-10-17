#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main()
{
unsigned long long int x;
int i,j,k,t,l;
string a;
scanf("%d",&t);
while(t--)
{
          cin>>a;
          x=0;
          l=a.length();
          x+=pow(2,l);
          for(i=1;i<l;i++)
            {               string a1,b1;
							a1= a.substr(0,i);
							b1=a.substr(l-i);
							if(a1==b1)
                            x+=pow(2,i);
            }
          printf("%llu\n",x);
}
}

