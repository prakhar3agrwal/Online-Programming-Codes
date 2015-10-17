#include<stdio.h>
main()
{
int nt,i,j,k,x,temp,num,t,j1,r,r1,a[400000];
scanf("%d",&t);
while(t--)
{
               scanf("%d",&num);
               if(num==0)
               printf("0\n");else{
               j1=num;
               j=0;nt=0;
               while(j1>0)
               {
                          a[j]=j1%10;
                          j1/=10;
                          j++;
                          nt++;
               }
               j=num+1;
               for(j1=1;j1<3;j1++)
                {
                                   temp=0;
                                   for(k=0;k<nt;k++)
                                   {
                                                    x=a[k]*(j)+temp;
                                                    a[k]=x%10;
                                                    temp=x/10;
                                   }
                                   while(temp>0)
                                   {
                                                a[nt++]=temp%10;
                                                temp/=10;
                                   }
                                  j++;
                                   
                     
               }
               r=0;
               for(j=nt-1;j>=0;j--)
               {
                                   a[j]=(r*10)+a[j];
                                   r=(a[j])%2;
                                   a[j]=(a[j])/2;
               }
               if(a[nt-1]==0)
               nt--;
               for(j=nt-1;j>=0;j--)
               printf("%d",a[j]);
               printf("\n");}
                                               
}
return 0;
}
