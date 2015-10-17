    #include <stdio.h>
    unsigned long long int choose(unsigned long long int n, unsigned long long int k) {
    if (k > n) {
    return 0;
    }
    k=(n-k)>(k-1)?(k-1):(n-k);
    n--;
    unsigned long long int r = 1, d;
    for ( d = 1; d <= k; ++d) {
    r *= n --;
    r /= d;
    }
    return r;
    }
    int main()
    {
    unsigned long long int n,k,t,ans;
    scanf("%llu",&t);
    while(t--){
    scanf("%llu%llu",&n,&k); 
    ans=choose(n,k);     
    printf("%llu\n",ans);}
    return 0;
    }
