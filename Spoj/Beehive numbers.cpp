#include<stdio.h>
int main()
{
unsigned long long int n,x,num;
while(1)
{
        scanf("%llu",&n);
        if(n==-1)
        break;
        else if(n==1)
        printf("Y\n");
        else
        {
            x=6;num=1;
            while(num<n)
            {
                   num+=x;
                   x+=6;
            }
            if(num==n)
             printf("Y\n");
            else
            printf("N\n"); 
        }
}
}     
