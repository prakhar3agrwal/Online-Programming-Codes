#include<stdio.h>
main()
{
int i,j,k,s,st,d,n,m,num,x,y;
while(1)
{
        scanf("%d%d",&n,&m);
        if(n==0 && m==0)
        break;
        long int a[n][2];
        for(i=0;i<n;i++)
        {scanf("%d%d%d%d",&s,&d,&a[i][0],&a[i][1]);a[i][1]+=a[i][0]-1;}
        for(i=0;i<m;i++)
        {
                        scanf("%d%d",&x,&y);
                        y+=x-1;
                        num=0;
                        for(j=0;j<n;j++)
                        {
                                        if((x>=a[j][0] && x<=a[j][1])||(y>=a[j][0] && y<=a[j][1]) ||(a[j][0]>=x && a[j][0]<=y)||(a[j][1]>=x && a[j][1]<=y))
                                        num++;
                        }
                        printf("%d\n",num);
        }
}
return 0;
}
