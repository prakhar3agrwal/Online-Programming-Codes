#include<stdio.h>
main()
{
int a,b,i,j;
while(1)
{
        scanf("%d%d",&a,&b);
        if(a==0 && b==0)
        break;
       /* int p(int x,int y)
        {
         if(x<=1)
         return 0;
         else
         return((p(x-1,y)+y)%x);
         }*/
         j=0;
         for(i=1;i<=a;i++)
         {
               j=(j+b)%i;
         }           
        printf("%d %d %d\n",a,b,j+1);
}
}
