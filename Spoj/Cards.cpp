#include<stdio.h>
main()
{
unsigned long long int i,n,t;
scanf("%llu",&t);
while(t--)
{
     scanf("%llu",&n);  
     i=(n*(n+1))+((n*(n-1))/2);
     i%=1000007;
     printf("%llu\n",i);
}
}
