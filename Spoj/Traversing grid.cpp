#include<stdio.h>
main()
{
unsigned long long int t,n,m;
scanf("%llu",&t);
while(t--)
{
        scanf("%llu%llu",&n,&m);
        if(n==1)
                printf("R\n");
        else if(m==1)
                printf("D\n");
        else if(m<n)
        {
                 if(m%2==0)
                 printf("U\n");
                 else 
                 printf("D\n");
        }
        else if(n%2==0)
        printf("L\n");
        else
        printf("R\n");
}
}
        



