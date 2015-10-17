#include<stdio.h>
#include<string.h>
main()
{
int k1,k2,k3,i,j,l,b1,c1,d1,x;
char a[85];char z[90];
while(1)
{
        scanf("%d%d%d",&k1,&k2,&k3);
        if(k1==0)
        break;
        int b[80]={0},c[80]={0},d[80]={0};b1=c1=d1=0;
        scanf("%s",&a);
        l=strlen(a);
        i=0;
        while(a[i]!='\0')
        {
                         if(a[i]<=105 && a[i]>=97)
                         b[b1++]=i;
                         else if(a[i]>=106 && a[i]<=114)
                         c[c1++]=i;
                         else 
                         d[d1++]=i;
                         i++;
        }
        for(i=0;i<b1;i++)
        {
                         x=(i+k1)%b1;
                         z[b[x]]=a[b[i]];
        }
        for(i=0;i<c1;i++)
        {
                         x=(i+k2)%c1;
                         z[c[x]]=a[c[i]];
        }
        for(i=0;i<d1;i++)
        {
                         x=(i+k3)%d1;
                         z[d[x]]=a[d[i]];
        }
        z[l]='\0';
       printf("%s\n",z);
}
}
