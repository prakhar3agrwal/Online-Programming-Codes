#include<stdio.h>
main()
{
int i,tf,h,q,s,n;
tf=q=h=s=0;
scanf("%d",&n);
char a[n][3];
for(i=0;i<n;i++)
{
                scanf("%s",&a[i]);
                if(a[i][2]=='2')
                h++;
                else if(a[i][0]=='1' && a[i][2]=='4')
                q++;
                else
                tf++;
}
s+=tf;
if(q>=s)
q-=s;
else
q=0;
if(h%2==0)
s+=h/2;
else
{
    s+=h/2+1;
    if(q>=2)
    q-=2;
    else
    q=0;
}
if(q%4==0)
s+=q/4;
else
s+=q/4+1;
printf("%d\n",s+1);
return 0;
}
