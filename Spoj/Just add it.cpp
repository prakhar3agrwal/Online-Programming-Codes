#include<stdio.h>
long long int power(long long int a,long long int b){
    long long int t=1,a1=1;
    while(b>0)
    {
        if(b & t)
        {
            a1 = (a1 * a) %10000007;
            b = b - t;
        }
        t = t << 1;
        a = (a * a) % 10000007;
    }
    return a1 %10000007;
}
int main()
{
long long int n,k,s=0;
while(1)
{
        scanf("%lld%lld",&n,&k);s=0;
        if(n==0 && k==0)
        break;
        s+=2*power((n-1),k);
        s+=2*power((n-1),n-1);
        s+=power((n),k);
        s+=power((n),n);
        printf("%lld\n",s%10000007);
}
return 0;
}
