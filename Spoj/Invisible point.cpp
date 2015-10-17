#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,x,n,t;
scanf("%d",&t);
while(t--)
{
          scanf("%d",&n);
          i=int(log2(n));
          if(pow(2,i)<n)
          i++;
          printf("%d\n",i+1);
}
}        
