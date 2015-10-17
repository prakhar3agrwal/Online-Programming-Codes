#include<stdio.h>
#include<string.h>
main()
{
int n,l,x,s,l1,i=0,lx; 
char a[2500];
scanf("%d",&n);
char ch;
ch=getchar();
while(n--)
{
                 
                
          l=x=s=l1=0;
          gets(a);
          i=0;lx=strlen(a);
          if(i<lx){
          while(a[i]!='\0')
          {
                                    l=0;                
                                    while(a[i]>=90 && a[i]<=122)
                                                  {l++;i++;}
                                                  while(a[i]==' ' || a[i]=='\t' || a[i]=='\r')
                                                  i++;
                                    if(l==l1)
                                            x++;
                                     else
                                     {
                                             l1=l;
                                             s=s>x?s:x;
                                             x=1;
                                     }
                                     
                                    
          }
          s=s>x?s:x;
          printf("%d\n",s);}
          else n++;
}
return 0;
}
          
                   
