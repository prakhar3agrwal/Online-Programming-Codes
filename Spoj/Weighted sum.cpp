#include<stdio.h>
#define max 1000000
int a[max];
bool b[max]={false};
inline int x()
{
    char y[100];
    int i=0,sum=0;
    scanf("%s",&y);
    while(y[i]!='\0')
    {
                     sum+=sum*10+(y[i]-48);
                     i++;
    }
    return sum;
}
main()
{
int t,n,i,j;
long long int s,w;
t=x();
while(t--)
{
         n=x();
         for(i=0;i<n;i++)
         scanf("%d",&a[i]);
         s=0;
         for(i=n-1;i>=0;i--)
         {
                     if(a[i]<0)
                     {
                               if(((-1)*a[i])<=s)
                               {
                                           b[i]=true;
                                           s+=a[i];
                               }
                               else
                               {
                                   b[i]=false;
                                   s=0;
                               }
                     }
                     else
                     {
                         s+=a[i];
                         b[i]=true;
                     }
         }
         s=a[0];w=1;
         for(i=1;i<n;i++)
         {
                         if(b[i]==false)
                         {
                                        s+=2*a[i];
                                        w=2;
                         }
                         else
                         {
                                 w++;
                                 s+=w*a[i];
                         }
         }
         printf("%lld\n",s);         
}
return 0;
}         
