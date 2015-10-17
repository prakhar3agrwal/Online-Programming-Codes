#include<stdio.h>
main()
{
long long int  n ,c,num,i,j,s;
scanf("%lld",&n);
while(n--)
{
         scanf("%lld%lld",&c,&num);
         long long int a[10]={1,2,3,4,5,6,7,8,9,10};
         for(i=0;i<num-1;i++)
         {
                                 s=0;
                                 for(j=0;j<10;j++)
                                 {
                                                  a[j]+=s;
                                                  s=a[j];
                                 }
         }
             printf("%lld %lld\n",c,a[9]);
}
}
                                                  
