#include<stdio.h>
#include<math.h>
main()
{
    long long int a,n;
    scanf("%lld",&a);
    while(a--){
    scanf("%lld",&n);
    if(n<2)
    n=1;
    else
    n=floor((log(2*3.14*n)/2+n*(log(n)-1))/log(10))+1;
    printf("%lld\n",n);}
}
