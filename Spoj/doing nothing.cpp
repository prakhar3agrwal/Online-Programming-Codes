#include<stdio.h>
int main()
{
unsigned long long int n,m,s,i,z,a[100000]={0};
while(1)
{
        scanf("%llu%llu",&n,&m);
        if(n==-1 && m==-1)
        break;
        s=0;z=0;
        for(i=0;i<n;i++)
        {
                        scanf("%llu",&a[i]);
                        z+=a[i];
                        s+=z*m;
        }
      printf("%llu\n",s);
}
return 0;
}
