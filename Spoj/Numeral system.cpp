#include<stdio.h>
main()
{
int i,j,s,a,b,n,r;
char x1[20],y[20],z[20];
scanf("%d",&n);
while(n--)
{
          scanf("%s%s",&x1,&y);
          j=0;a=b=0;
          while(x1[j]!='\0')
          {
                           if(x1[j]=='m')
                           {
                                  if((j-1)==0)  
                                  a+=1000*(x1[j-1]-48);
                                  else
                                  a+=1000;
                           }
                           else if(x1[j]=='c')
                           {
                                
                                  if((j-1)>=0 && (x1[j-1]>=48 && x1[j-1]<=57 ))  
                                  a+=100*(x1[j-1]-48);
                                  else
                                  a+=100; 
                           }
                           else if(x1[j]=='x')
                           {
                                
                                  if((j-1)>=0 && (x1[j-1]>=48 && x1[j-1]<=57 ))   
                                  a+=10*(x1[j-1]-48);
                                  else
                                  a+=10; 
                           }
                           else if(x1[j]=='i')
                           {
                                
                                  if((j-1)>=0 && (x1[j-1]>=48 && x1[j-1]<=57 ))  
                                  a+=1*(x1[j-1]-48);
                                  else
                                  a+=1; 
                           }
                           j++;
          }j=0;
                    while(y[j]!='\0')
          {
                           if(y[j]=='m')
                           {
                                  if((j-1)==0)  
                                  b+=1000*(y[j-1]-48);
                                  else
                                  b+=1000;
                           }
                           else if(y[j]=='c')
                           {
                                
                                  if((j-1)>=0 && (y[j-1]>=48 && y[j-1]<=57) )  
                                  b+=100*(y[j-1]-48);
                                  else
                                  b+=100; 
                           }
                           else if(y[j]=='x')
                           {
                                
                                  if((j-1)>=0 && (y[j-1]>=48 && y[j-1]<=57) )  
                                  b+=10*(y[j-1]-48);
                                  else
                                  b+=10; 
                           }
                           else if(y[j]=='i')
                           {
                                
                                  if((j-1)>=0 && (y[j-1]>=48 && y[j-1]<=57) )  
                                  b+=1*(y[j-1]-48);
                                  else
                                  b+=1; 
                           }
                           j++;
          }
          s=a+b;j=1000;
          while(s>0)
          {
                    r=s/j;
                    s%=j;
                    if(r==1)
                    {
                            if(j==1000)
                            printf("m");
                            else if(j==100)
                            printf("c");
                            else if(j==10)
                            printf("x");
                            else if(j==1)
                            printf("i");
                    }
                    else if(r>1)
                    {
                            if(j==1000)
                            printf("%dm",r);
                            else if(j==100)
                            printf("%dc",r);
                            else if(j==10)
                            printf("%dx",r);
                            else if(j==1)
                            printf("%di",r);
                    }
                    j/=10;
          }
           printf("\n");         
}
}               
