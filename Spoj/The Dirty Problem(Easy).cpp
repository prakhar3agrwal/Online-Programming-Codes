#include<stdio.h>
main()
{
long long int n,a,k,i,j,t,x,x1,f,s,y1,y;
scanf("%lld",&t);
while(t--)
{
          scanf("%lld%lld",&n,&k);
          f=0;
          s=0;
          x=((1+k)*k)/2;
          if(k%2!=0)
          {
             //if((n-x)>=0)
             {
                  y=((n-x)/(k))+(1);
                  y1=x+((y-1)*k);
                  if(y1==n)
                  f=1;
                }
          }
          else
          {
                 x1=x+((k/2)-1)*k ;
                 if(x1==n)
                 f=1;
                 else if(x1<n)
                 {
                      y=((n-x1)/(k/2))+(1);
                      y1=x1+((y-1)*(k/2));
                      if(y1==n)
                      f=1;
                 }
                      else if(x1>n)
                      {
                            y=((n-x)/(k))+(1);
                            y1=x+((y-1)*k);
                            if(y1==n)
                            f=1;
                      }
                 
          }
          if(f==1)
          printf("Padam tharumaru machi!\n");
          else
          printf("Padam sotha machi!\n");
}
}

