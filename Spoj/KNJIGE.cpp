#include<stdio.h>
main()
{
int i,j,k,n,pos,max=0,c=0,x,f,n1;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
                scanf("%d",&a[i]);
                if(a[i]==n)
                pos=i;
}x=0;k=pos;n1=n;n--;
while(n>0)
{
        f=0;
        for(j=pos-1;j>=0;j--)
        {
         if(a[j]==n)
        {
                   x=j;
                   f=1;
                   break;
        }
        }
        if(f==1)
        {
                c+=pos-x-1;
                pos=x;
        }
        else if(f==0)
        {
            c+=pos+n1-k-1;
            break;
        }n--;
}
printf("%d\n",c);
return 0;
}
               
