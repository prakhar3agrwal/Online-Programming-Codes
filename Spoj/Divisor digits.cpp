#include<stdio.h>
#include<string.h>
main()
{
char a[300];
long long int r,x,s,i,sum,l;
while(scanf("%s",&a)!=EOF)
{
      int b[10]={0};
      i=0;l=strlen(a);s=0;sum=0;
      while(a[i]!='\0')
      {
              b[a[i]-48]++;
              
              s+=(a[i]-48);
              i++;
      }
      if(b[1]>0)
      sum+=b[1];
      if(b[2]>0)
      if((a[l-1]-48)%2==0)
      sum+=b[2];
      if(b[3]>0)
      if(s%3==0)
      sum+=b[3];
      if(b[4]>0)
      if(((a[l-2]-48)*10+(a[l-1]-48))%4==0)
      sum+=b[4];
      if(b[5]>0)
      if(a[l-1]=='5' || a[l-1]=='0')
      sum+=b[5];
      if(b[6]>0)
      if(s%3==0 && (a[l-1]-48)%2==0)   
      sum+=b[6];
      if(b[7]>0)
      {
                i=0;r=0;x=0;
                while(a[i]!='\0')
                {
                                 x=r*10+(a[i]-48);
                                 r=x%7;
                                 i++;
                }   
                if(r==0)
                sum+=b[7];
      }
      if(b[8]>0)
      if(((a[l-3]-48)*100+(a[l-2]-48)*10+(a[l-1]-48))%8==0)
      sum+=b[8];
      if(b[9]>0)
      if(s%9==0)
      sum+=b[9];
      printf("%lld\n",sum);
}     
}
