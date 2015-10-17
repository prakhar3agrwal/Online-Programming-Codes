#include<stdio.h>
main()
{
unsigned long long int n,c,min,max,s,s1,i,j,k,d,d1,a[100005];
scanf("%llu",&n);
while(n--)
{
          scanf("%llu",&c);
          max=min=0;s=s1=0;d=0;d1=1000000000;
          for(i=0;i<c;i++)
          {
                          scanf("%llu",&a[i]);
                          s+=a[i];
          }j=c;k=c;
          for(i=0;i<c;i++)
          {
                          j--;
                          s-=a[j];
                          min=s>s1?s1:s;
                          max=s>s1?s:s1;
                          d=(min*2)+max;
                          d1=d1>d?d:d1;
                          k--;
                          s1+=a[k];

          }
          printf("%llu\n",d1);                
                          
}
}

