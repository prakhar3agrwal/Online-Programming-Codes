#include<stdio.h>
main()
{
int n,s,b,i;
while(1)
{
        b=7;
        scanf("%d",&n);
        if(n==0)
        break;
        s=5;
        s+=((n-1)*((3*n)+8))/2;
        printf("%d\n",s);
}
}
