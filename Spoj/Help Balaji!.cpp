#include<iostream>
#include<math.h>
main()
{
unsigned long long int i,j,k,f,a,b;
int c;
scanf("%d",&c);
while(c--)
{
          scanf("%llu%llu",&a,&b);
          f=0;
          if(b<=3)
          printf("%llu\n",b);
          else{
          for(i=b;i>=a;i--)
          {
                           f=0;
                           for(j=2;j<=sqrt(i);j++)
                           if(i%j==0)
                           {
                                     f=1;
                                     break;
                           }
                           if(f==1)
                           {
                                   printf("%llu\n",i);
                                   break;
                           }
                           
          }}
}
}
          
