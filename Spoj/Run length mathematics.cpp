#include<stdio.h>
#include<string.h>
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
char a[100],b[100],c[10];
int i,j,s,x,r;
long long int a1,b1,c1,f;
while(scanf("%s%s%s",&a,&c,&b)!=EOF)
{
                                    a1=0;
                                    for(i=0;i<strlen(a);i+=2)
                                    {
                                                             for(j=0;j<a[i]-48;j++)
                                                             a1=a1*10+(a[i+1]-48);
                                    }
                                    b1=0;
                                    for(i=0;i<strlen(b);i+=2)
                                    {
                                                             for(j=0;j<b[i]-48;j++)
                                                             b1=b1*10+(b[i+1]-48);
                                    }
                                    printf("%s %s %s = ",a,c,b);
                                    if(strcmp(c,"+")==0)
                                    a1+=b1;
                                    else if(strcmp(c,"-")==0)
                                    a1-=b1;
                                    else if(strcmp(c,"*")==0)
                                    a1*=b1;
                                    else if(strcmp(c,"/")==0)
                                    a1/=b1;
                                    if(a1==0)
                                    printf("10\n");
                                    else
                                    {i=0;
                                    while(a1>0)
                                    {
                                            a[i]=(a1%10+48);
                                            a1/=10;
                                            i++;
                                    }
                                    a[i]='\0';s=1;
                                    reverse(a,0,strlen(a)-1);
                                    for(i=0;i<strlen(a);i++)
                                    {
                                             if(a[i]==a[i+1])
                                             s++;
                                             else if(a[i]!=a[i+1])
                                             {
                                                  x=s/9;
                                                  r=s%9;
                                                  for(j=0;j<x;j++)
                                                  printf("9%c",a[i]);
                                                  if(r>0)
                                                  printf("%d%c",r,a[i]);
                                                  s=1;
                                             }
                                             
                                    }printf("\n");}
                                                       
}
return 0;
}
                                    

