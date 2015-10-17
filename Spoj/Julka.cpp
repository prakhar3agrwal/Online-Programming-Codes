#include<iostream>
#include<string.h>
using namespace std;
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
int t=10,i,l1,l2,j,k,l,x,f,r,min,y;
char a[200],b[200],c[200],d[200];
while(t--)
{
          scanf("%s%s",&a,&b);
          reverse(a, 0, strlen(a)-1);
          //strrev(a);
          //strrev(b);
          reverse(b, 0, strlen(b)-1);
          l2=strlen(b);
          l1=strlen(a);
          for(j=0;j<l2;j++)
          {
                           f=0;
                           for(k=j;k<l1;k++)
                           {
                                            if(a[k]>=b[j])
                                            {
                                                          x=(a[k]-48)-(b[j]-48);
                                                          a[k]=x+48;
                                                          break;
                                            }
                                            else
                                            {
                                                x=10-((b[j]-48)-(a[k]-48));
                                                a[j]=x+48;
                                                for(l=j+1;l<l1;l++)
                                                {
                                                    if((a[l]-48)>0)
                                                    {
                                                              x=a[l]-48;x--;
                                                              a[l]=x+48;
                                                              f=1;
                                                              break;
                                                    }
                                                    else
                                                    {
                                                    a[l]=57;
                                                    }
                                                }if(f==1)
                                                break;
                                            }
                           }
        }
        reverse(a, 0, strlen(a)-1);
        r=0;
        j=0;
        while(a[j]!='\0')
        {
                         x=a[j]-48;
                         r=r*10+x;
                         a[j]=(r/2)+48;
                         r%=2;
                         j++;
        }
        strcpy(c,a);
        reverse(c, 0, strlen(c)-1);l=strlen(c);min=l>l2?l2:l;r=0;
        for(i=0;i<min;i++)
        {
                         x=b[i]-48;
                         y=c[i]-48;
                         x+=(y+r);
                         r=x/10;
                         x=x%10;
                         d[i]=x+48;
        }
        if(l>l2)
        {
                for(j=i;j<l;j++)
                {
                                x=c[j]-48;
                                x+=r;
                                r=x/10;
                                x%=10;
                                d[j]=x+48;
                }
                if(r>0)
                {d[j]=r+48;j++;}
                d[j]='\0';
        }
         reverse(d, 0, strlen(d)-1);                       
         l=strlen(d);
         for(i=0;i<l;i++)
         {
                         if(d[i]!='0')
                         {
                                      j=i;
                                      break;
                         }
         }
         for(i=j;i<l;i++)
         if((d[i]-48)>=0 && (d[i]-48)<=9)
         printf("%c",d[i]);
         printf("\n");
         l=strlen(a);
         for(i=0;i<l;i++)
         if(a[i]!='0')
         {
                      j=i;
                      break;
         }
         for(i=j;i<l;i++)
         if((a[i]-48)>=0 && (a[i]-48)<=9)
         printf("%c",a[i]);
         printf("\n");
}
}
