//#include<iostream.h>
//#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,n,l,m;
scanf("%d",&n);
char a[400],b[400];
for(i=0;i<n;i++)
{
                m=-1;
                scanf("%s",&a);
                l=strlen(a);
                for(j=0;j<l;j++)
                {
                                if(a[j]=='(')
                                continue;
                                else if(a[j]>64 && a[j]<91 ||a[j]>96 && a[j]<123)
                                printf("%c",a[j]);
                                else if(a[j]==')')
                                {
                                     printf("%c",b[m]);
                                     m--;
                                }
                                else
                                {
                                    m++;
                                    b[m]=a[j];
                                }
                }printf("\n");
}
//getch();
return 0;
}
