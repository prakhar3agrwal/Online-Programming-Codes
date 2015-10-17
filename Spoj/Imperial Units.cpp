#include<stdio.h>
long long int gcd (long long int a, long long int b){
    if ( b==0) return a;
    else
    return gcd ( b , a%b );
                      }
main()
{
long long int n,i,j,k,a[10][2],num,den;
while(1)
{
        scanf("%lld",&n);
        if(n==-1)
        break;
        n--;
        num=den=1;
        for(i=0;i<n;i++)
        {
                        scanf("%lld%lld",&a[i][0],&a[i][1]);
                        num*=a[i][1];
                        den*=a[i][0];
        }
        j=gcd(num,den);
        num/=j;
        den/=j;
        printf("%lld %lld\n",den,num);
}
return 0;
}             
