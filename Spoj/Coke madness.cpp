#include<stdio.h>
main()
{
long long int i,j,s,k=0,t,n,min;
scanf("%lld",&t);
while(t--)
{
          scanf("%lld",&n);
          s=0;min=0;k++;
          for(i=0;i<n;i++)
          {
                 scanf("%lld",&j);
                 s+=j;
                 min=min>s?s:min;
          }
          printf("Scenario #%lld: %lld\n",k,(-1)*min+1);
}
return 0;
}         
