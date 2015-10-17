#include<stdio.h>
main()
{
unsigned long long int n,num,a[100],s,x,t;
int i,j,f,r,k;
scanf("%llu",&t);
while(t--)  
 {         
           scanf("%llu",&num);
           f=0;
          a[0]=num;
          i=0;
          while(1)
          {
                   
                       s=0;
                       x=a[i];
                       f=0;
                       while(x>0)
                       {
                                  r=x%10;
                                  x=x/10;
                                  s+=r*r;
                        }
                        
                        for(j=0;j<i;j++)
                        {
                                if(a[j]==s)
                                {
                                           f=1;
                                           break;
                                }
                                
                        }
                        if(f==1)
                        {
                                printf("-1\n");
                                break;
                        }
                        if(s==1)
                        {
                                printf("%llu\n",i+1);
                                break;
                        }
                        
                        i++;
                        a[i]=s;
          }
         
}
}
