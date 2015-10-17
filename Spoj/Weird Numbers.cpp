#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[500],b[500];
int i,j,r,k,x[400000],r1,rp;
long long int n1,n;
while(1)
{
       x1: scanf("%s",&a);
        if(a[0]=='e')
        break;
        r=n=j=0;
        if(a[0]=='t')
        {
                     scanf("%lld",&n);//if(n==0)printf("0\n");
                     //else
                     
                     i=3;
                     while(isdigit(a[i]))
                     {
                                      r=r*10+a[i]-'0';
                                      i++;
                     }
                     rp=r;
                     r*=-1;
                     if(n==0)
                     {
                                   printf("0\n");
                                   goto x1;
                     }
                     else{
                     while(n!=0)
                        {
                                   if(n<0)
                                   {
                                          for(i=1;;i++)
                                          {
                                                       if(rp*i>=(-1)*n)
                                                       break;
                                          }
                                          r1=n-(r)*i;
                                          n=i;
                                   }
                                   else if(n>0)
                                   {
                                           for(i=1;;i++)
                                           {
                                                        if(rp*i>=n)
                                                        break;
                                           }
                                           if(rp*i!=n)
                                           i--;
                                           r1=n-rp*i;
                                           n=(-1)*i;
                                   }
                                   x[j]=r1;
                                   j++;
if(n==0)break;
                        }
                        
                        for(i=j-1;i>=0;i--)
                        printf("%d",x[i]);
                        printf("\n");}
        }
        else
        {
            i=5;
            while(isdigit(a[i]))
            {
                   r=r*10+a[i]-'0';
                   i++;
            }
            r*=-1;
            scanf("%s",&b);
            i=strlen(b);
            i--;n=1;n1=0;
            while(i>=0)
            {
                  n1+=(b[i]-48)*n;
                  n*=r;
                  i--;
            }
            printf("%lld\n",n1);  
        }
        
        
}
}
                     
