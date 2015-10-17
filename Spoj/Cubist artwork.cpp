#include<stdio.h>
main()
{
int w,d,i,x,s;
while(1)
{
        scanf("%d%d",&w,&d);
        if(w==0)
        break;
        int a[210]={0},b[210]={0};s=0;
        for(i=0;i<w;i++)
        {
                        scanf("%d",&x);
                        a[x]++;
        }
        for(i=0;i<d;i++)
        {
                        scanf("%d",&x);
                        b[x]++;
        }
        for(i=1;i<21;i++)
        {
                         x=a[i]>b[i]?a[i]:b[i];
                         s+=x*i;
        }
        printf("%d\n",s);
}
}
