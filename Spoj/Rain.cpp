#include<stdio.h>
#define max 1500005
int a[max];
main()
{
int t,i,j;
int x,y,n,m,days;
long int s;
scanf("%d",&t);
while(t--)
{
          scanf("%d%d%d%d",&x,&y,&n,&m);
          for(i=0;i<n;i++)
          {
                          x=(78901 + 31*x) % 699037;
                          y=(23456 + 64*y) % 2097151;
                          a[i]=(x%100 + 1)*(y%100+1);
          }
          days=n,s=a[0];
          for(i=1,j=0;i<n;i++)
          {
                            s+=a[i];
                            if(s>m)
                            {
                                   while(s>m)
                                   {
                                             days=days>(i-j)?(i-j):days;
                                             s-=a[j++];
                                             
                                   }
                            }
          }
          printf("%ld\n",days);
}
return 0;
}                   
