#include<stdio.h>
#include<string.h>
main()
{
int c,i,j,l,r,k,m,x,fd,sd;
char a[201],b[201];
while(1)
{
        scanf("%d",&c);
        if(c==0)
        break;
        else{
        scanf("%s",&a);
        l=strlen(a);
        r=l/c;
        fd=(2*c)-1;sd=1;
        for(i=0;i<c;i++)
        {
                        j=i;
                        for(k=0;k<r;k++)
                        {
                                        printf("%c",a[j]);
                                        //cout<<a[j];
                                        if(k%2==0)
                                        j+=fd;
                                        else
                                        j+=sd;
                        }
                        fd-=2;
                        sd+=2;
        }
        printf("\n");
}
}
return 0;
}
