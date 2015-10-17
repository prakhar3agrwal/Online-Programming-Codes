#include<stdio.h>
int main()
{
int i,n;
while(1)
{
        
        scanf("%d",&n);
        if(n==0)
        break;
        i=0;
        while(n!=1)
        {
                   i++;
                   n/=2;
        }
        printf("%d\n",i);
}
}
