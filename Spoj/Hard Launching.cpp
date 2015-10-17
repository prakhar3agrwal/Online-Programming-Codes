#include<stdio.h>
#include<math.h>
main()
{
int j,t,d,s;j=0;
double x;
scanf("%d",&t);
while(t--)
{
          scanf("%d%d",&d,&s);
          j++;
          if(((double)(d)*9.806)>((double)(s)*(double)(s)))
          printf("Scenario #%d: -1\n",j);
          else
          {
              x=((double)(d)*9.806)/((double)(s)*(double)(s));
              x=asin(x);
              x/=2;
              x=(x*(double)(180))/(2*acos(0.0));
              printf("Scenario #%d: %0.2f\n",j,x);
          }
}
return 0;
}
