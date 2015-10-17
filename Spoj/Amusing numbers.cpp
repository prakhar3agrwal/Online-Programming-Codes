#include<stdio.h>
main()
{
long long int i,j,k,s,n,x,t,f;
scanf("%lld",&t);
while(t--)
{
          scanf("%lld",&n);
          f=0;
          if(n==1)
          printf("5\n");
          else if(n==2)
          printf("6\n");
          else
          {
              i=2;j=1;k=n;
              while(n>0)
              {
                        n-=i;
                        i*=2;
                        j++;
              }
              if(n==0)
              {
                      j--;
                      for(i=0;i<j;i++)
                      printf("6");
                      printf("\n");
              }
              else if(n<0)
              {
                   j--;
                   i/=2;
                   n+=i;
                   while(i!=1)
                   {
                          i/=2;
                          x=n/i;
                          if(n%i==0)
                          x--;
                          if(x==0)
                          printf("5");
                          else if(x==1)
                          printf("6");
                          n=n%i;
                          if(n==0)
                          {f=1;
                                  while(i!=1)
                                  {
                                             
                                             i/=2;
                                             printf("6");
                                  }
                          }
                          if(f==1)
                          break;
                   }
                   printf("\n");
              }
          }                 
} 
return 0;        
}            
              
