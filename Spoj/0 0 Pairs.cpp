#include<string.h>
#include<stdio.h>
void reverse(char *x, int beg, int end)
{
   char a, b, c;
 
   if ( beg >= end )
      return;   
 
   c = *(x+beg);
   *(x+beg) = *(x+end);
   *(x+end) = c;
 
   reverse(x, ++beg, --end);
}
main()
{
int i,j,x,y,l1,l2,min,r,n,i1;
char a1[999][1000];
char a[20000]="0",b[20000]="1",d[20000];
strcpy(a1[0],"0");
strcpy(a1[1],"1");
{
for(i1=0;i1<997;i1++)
{
          l2=strlen(b);
          l1=strlen(a);r=0;
          for(i=0;i<l1;i++)
          {
                           x=a[i]-48;
                           x*=2;
                           x+=r;
                           r=x/10;
                           x%=10;
                           a[i]=x+48;
          }
          if(r>0)
          {
                 a[i]=r+48;
                 i++;
          }
          a[i]='\0';
          l1=strlen(a);
          min=l1>l2?l2:l1;r=0;
          for(i=0;i<min;i++)
          {
                         x=b[i]-48;
                         y=a[i]-48;
                         x+=(y+r);
                         r=x/10;
                         x=x%10;
                         d[i]=x+48;
          }
                for(j=i;j<l2;j++)
                {
                                x=b[j]-48;
                                x+=r;
                                r=x/10;
                                x%=10;
                                d[j]=x+48;
                }
                if(r>0)
                {d[j]=r+48;j++;}
                d[j]='\0';
                strcpy(a,b);
                strcpy(b,d);
                reverse(d, 0, strlen(d)-1);
                strcpy(a1[i1+2],d);
}    

}while(scanf("%d",&n)!=EOF){
printf("%s\n",a1[n-1]);}
return 0;
}          


