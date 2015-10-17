#include<stdio.h>
main()
{
int i,j,k,d,r,t;
scanf("%d",&t);
while(t--)
{
          scanf("%d%d%d",&i,&j,&k);
          if((j-i)==(k-j))
          printf("%d\n",(2*k)-j);
          else
          printf("%d\n",(k*k)/j);
}
return 0;
}
