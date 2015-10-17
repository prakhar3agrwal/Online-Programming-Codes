#include<stdio.h>
long long int gcd (long long int a, long long int b){
    if ( b==0) return a;
    else
    return gcd ( b , a%b );
    }
main()
{
int n,i,f=0;
long long int g,x;
while(1)
{
        scanf("%d",&n);
        if(n==0)
        break;
        x=f=0;
        long long int a[3*n];
        for(i=0;i<3*n;i++)
        {
                          scanf("%lld",&a[i]);
                          if(a[i]==1)
                          f=1;
        }
        if(f==1)
        g=1;
        else{
        g=a[0];
        for(i=1;i<3*n;i++)
        g=gcd(g,a[i]);
        g=g*g*g;}
        x=0;
        for(i=0;i<3*n;i+=3)
        x+=(a[i]*a[i+1]*a[i+2])/g; 
        printf("%lld\n",x);
}
return 0;
}
                
