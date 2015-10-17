#include<iostream>
#include<string.h>
using namespace std;
int haha()
{
    int i=0,n=0;
    char y[25];
    while(1){
    gets(y);if(strlen(y)>0)
    break;
}
    while(y[i]!='\0')
    {
                     n=n*10+y[i]-'0';
                     i++;
    }
    return n;
}
main()
{
int i,n,j,o,h,d,l,c;
long int a[]={1,20,360,7200,144000,2880000,57600000,1152000000},b[10];
long int num;
char x[100];
while(1)
{
        n=haha();
        if(n==0)
        break;
        num=0;
        for(i=0;i<n;i++)
        {
                        j=0;h=d=o=0;
                        while((c=getchar())!='\n')
                        {;if(char(c)=='.')
                        d++;
                        else if(char(c)=='-')
                        h++;}
                        num+=(o+h*5+d)*a[n-1-i];
        }
        printf("%ld\n",num);
        getchar();
}
return 0;
}       
