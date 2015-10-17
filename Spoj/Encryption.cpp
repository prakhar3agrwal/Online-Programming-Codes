#include<stdio.h>
#include<string.h>
main()
{
long long int n,i,j,k;
char x[100000],y[]="aeiou",z[]="bcdfghjklmnpqrstvwxyz";
scanf("%lld",&n);
while(n--)
{
          scanf("%s",&x);
          int a[26]={0};
          i=0;
          while(x[i]!='\0')
          {
                           a[x[i]-97]++;
                           if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u')
                           {
                               for(j=0;j<5;j++)
                               if(y[j]==x[i])
                               k=j;
                               k=(a[x[i]-97]-1)*5+(k+1);
                               printf("%c",z[(k-1)%21]);
                           }
                           else
                           {
                               for(j=0;j<21;j++)
                               if(z[j]==x[i])
                               k=j;
                               k=(a[x[i]-97]-1)*21+(k+1);
                               printf("%c",y[(k-1)%5]);
                           }
                           i++;
          }printf("\n");
}
}                    
