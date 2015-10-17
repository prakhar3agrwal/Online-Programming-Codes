#include<stdio.h>
#include<math.h>
main()
{
long long int n,num,x,y,w,i,m,a[4]={2,3,5,7},d,j;
double z;
scanf("%lld",&n);
while(n--)
{
          scanf("%lld",&num);
          if(num<5)
          printf("%lld",a[num-1]);
          else
          {
              d=0;
              y=num;
              x=1;
              while(y>0)
              {
                       d++;
                       x=x*4;
                       y=y-x;
                         
              }
              if(y==0)
              {
                      for(i=0;i<d;i++)
                      printf("7");
              }
              else
              {     
                      y+=x;
                      x/=4;
                      while(x!=1)
                      {
                                
                                w=y/x;
                                m=y%x;
                                if(m==0)
                                w--;
                                printf("%lld",a[w]);
                                y=m;
                                if(m==0)
                                {
                                        z=(log10 (x))/log10 (4);
                                        for(j=0;j<z-1;j++)
                                        printf("7");
                                        break;
                                }
                                x/=4;
                      }
                      if(y==0)
                      y=3;
                      else
                      y--;
                      printf("%lld",a[y]);
              }
          }
          printf("\n");
}       
}              
              
