#include<stdio.h>
main()
{
long long int a[100000],n,t,i,j,c,s,sum=0;
scanf("%lld",&t);j=0;
while(t--)
{
        j++;
        scanf("%lld%lld%lld",&n,&c,&s);
        sum=0;
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);  
        sum+=((2*c)+n*s);
        for(i=1;i<n;i++)
        {
                        if((((a[i]-a[i-1])-1)*s)>=(2*c))
                        {sum+=2*(c);}
                        else
                        sum+=((a[i]-a[i-1])-1)*s;
        }
        printf("Case #%lld: %lld\n",j,sum);
}
}
