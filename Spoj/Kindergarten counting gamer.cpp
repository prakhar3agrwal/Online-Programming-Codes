#include<stdio.h>
#include<string.h>
int main()
{
char a[20000];
int i,w,f,l;
while(gets(a))
{
i=0;w=0;f=0;
l=strlen(a);
while(i<l)
{
 if(f==0)
 {

          if((a[i]<65)||(a[i]>90 && a[i]<97)||a[i]>122)
         {f=0;
              
         }else {w++;f=2;}
 }
else if(f==2)
{
     if((a[i]<65)||(a[i]>90 && a[i]<97)||a[i]>122)
     f=0;
}
 i++;
}
printf("%d\n",w);
}
}
