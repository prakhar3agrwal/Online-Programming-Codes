#include<stdio.h>
main()
{
long long int a,b,c,i,n,j,f;
char y[100];
scanf("%lld",&n);
while(n--)
{
          scanf("%s",&y);i=0;f=0;
          if(y[0]=='x')
          {
                       a=1;j=i+3;
                       i+=4;
          }
          else
          {
              i=0;a=0;
              while(y[i]!='*')
              {
                    a=a*10+(y[i]-48);
                    i++;
              }
              j=i+4;
              i+=5;
          }
          b=0;
          if(y[j]=='=')
          {
                       b=c=0;
                       goto g;
          }
          while(y[i]!='=' && y[i]!='*' && y[i]!='x')
          {
                          b=b*10+(y[i]-48);
                          i++;
          }
          if(y[i]=='*')
          {
                       if(b==0)
                       b=1;
                       if(y[j]=='-')
                       b*=(-1);
                       if(y[i+2]=='=')
                       c=0;
                       else
                       {
                           j=i+2;i+=3;c=0;
                           while(y[i]!='=')
                           {
                                           c=c*10+(y[i]-48);
                                           i++;
                           }
                           if(y[j]=='-')
                           c*=(-1);
                       }
          }
          else if(y[i]=='x')
          {
               b=1;
               if(y[i+1]=='=')
               c=0;
               else 
               {
                           j=i+1;i+=2;c=0;
                           while(y[i]!='=')
                           {
                                           c=c*10+(y[i]-48);
                                           i++;
                           }
                           if(y[j]=='-')
                           c*=(-1);
               }
          }
          else if(y[i]=='=')
          {
               if(b==0)
               b=c=0;
               else{
               c=b;
               if(y[j]=='-')
               c*=(-1);
               b=0;}
          }
        g: f=(b*b)-(4*a*c);
        if(f<0)
        printf("Imaginary roots.\n");
        else if(f>0)
        printf("Distinct real roots.\n");
        else if(f==0)
        printf("Equal roots.\n");

}
}
          
                    
