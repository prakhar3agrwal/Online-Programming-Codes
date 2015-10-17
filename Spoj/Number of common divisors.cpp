#include<stdio.h>
#include<math.h>
int gcd (int a, int b){
    if ( b==0) return a;
    else
    return gcd ( b , a%b );
                      }
int main()
{
int i,j,s,n,a,b,x,r;
scanf("%d",&n);
while(n--)
{
          scanf("%d%d",&a,&b);
          x=gcd(a,b);
          s=0;
          r=int(sqrt(x));
          if(x==1)
          s=1;
          else
          {
                    
                    i=1;
                    while(i<=r)
                    {
                               if(a%i==0 && b%i==0)
                               s++;
                               if(a%(x/i)==0 && b%(x/i)==0)
                               s++;
                               i++;
                    }
                    if(r*r==x)
                    s--;
          }
          
          printf("%d\n",s);
}
}
