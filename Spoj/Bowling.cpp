#include<stdio.h>
main()
{
int n,i,s,g,j,sc;
scanf("%d",&n);
while(n--)
{
          int a[25]={0};s=0;g=0;i=0;
          while(1)
          {
                           scanf("%d",&a[i]);
                           if(g<9)
                           {
                                  
                                  if(a[i]==10)
                                  {
                                              g++;
                                              i++;
                                  }
                                  else
                                  {
                                      scanf("%d",&a[i+1]);
                                      g++;
                                      i+=2;
                                  }
                           }
                           else if(g==9)
                           {
                                if(a[i]==10)
                                {
                                            scanf("%d%d",&a[i+1],&a[i+2]);
                                            i+=3;
                                            break;
                                }
                                else
                                {
                                    scanf("%d",&a[i+1]);
                                    if(a[i]+a[i+1]==10)
                                    {
                                                       scanf("%d",&a[i+2]);
                                                       i+=3;
                                    }
                                    else i=i+2;
                                    break;
                                }
                           }
          }
j=i;s=0;sc=0;g=0;i=0;
while(1)
{
        s=0;if(g<9)
        {
        if(a[i]<10)
        {
                   s=a[i]+a[i+1];
                   if(s==10 )
                   {
                            if(i+2<j)
                            sc+=10+a[i+2];
                            else
                            break;
                   }
                   else
                   sc+=s;
                   i+=2;
                   g++;
        }
        else if(a[i]==10)
        {
             sc+=10+a[i+1]+a[i+2];
             i++;
             g++;
        }
        }
        else if(g==9)
        {
             
                     if(a[i]==10 || a[i]+a[i+1]==10)
                     {
                      sc+=a[i]+a[i+1]+a[i+2];
                      break;
                     }
                     else
                     {
                         sc+=a[i]+a[i+1];
                         break;
                     }
        }
        
}
printf("%d\n",sc);      
        
}
}
