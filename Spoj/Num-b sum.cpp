#include<stdio.h>
#include<math.h>
main()
{
unsigned long long int b,x,y,r1,r2,n,s,num,i;
scanf("%llu",&n);
while(n--)
{
          scanf("%llu%llu%llu%llu",&num,&b,&x,&y);i=0;s=0;
          while(x>0 || y>0)
          {
                    r1=x%b;
                    r2=y%b;
                    x/=b;
                    y/=b;
                    s+=(pow(b,i))*((r1+r2)%b);
                    i++;
          } 
          printf("%llu %llu\n",num,s);
}
} 
