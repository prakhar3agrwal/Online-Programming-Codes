#include<iostream>
#define max 2000
int p[max][max],ne[max][max];
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main()
{
int i,j,k,z=0,c,n,g,n1=0,f1,f2,dx,dy;
while(1)
{
        scanf("%d",&n);
        if(n==0)
        break;
        f1=f2=c=0;
        n1++;
        int x[n],y[n];
        for(i=0;i<n;i++)
        scanf("%d%d",&x[i],&y[i]);
        for(i=0;i<n;i++)
        {
                        for(j=i+1;j<n;j++)
                        {
                                          dx=x[j]-x[i];
                                          dy=y[j]-y[i];
                                          if(dx*dy>0)
                                          {
                                                     if(dx<0)
                                                     {
                                                             dx*=(-1);
                                                             dy*=(-1);
                                                     }
                                                     g=gcd(dx,dy);
                                                     dx/=g;
                                                     dy/=g;
                                                     if(p[dx-1][dy-1]!=n1)
                                                     {
                                                          p[dx-1][dy-1]=n1;
                                                          c++;
                                                     }
                                          }
                                          else if(dx*dy<0)
                                          {
                                               if(dx<0)
                                               dx*=(-1);
                                               else
                                               dy*=(-1);
                                               g=gcd(dx,dy);
                                               dx/=g;
                                               dy/=g;
                                               if(ne[dx-1][dy-1]!=n1)
                                               {
                                                    p[dx-1][dy-1]=n1;
                                                    c++;
                                               }
                                          }
                                          else if(dx==0 && dy!=0)
                                          {
                                               if(f1==0)
                                               {
                                                        f1=1;
                                                        c++;
                                               }
                                          }
                                          else if(dx!=0 && dy==0)
                                          {
                                               if(f2==0)
                                               {
                                                        f2=1;
                                                        c++;
                                               }
                                          } 
                        }       
        }   
        printf("%d\n",c);      
        n1++;
}
return 0;
}                                             
                                                     
                                                     
        
