#include<stdio.h>
#include<math.h>
main()
{
unsigned long long int i,j;
scanf("%llu",&i);
while(i--)
{
          scanf("%llu",&j);
          j=192+(j-1)*250;
          printf("%llu\n",j);
}
}
