#include<stdio.h>
main()
{
long int n,i,r;
int t;
scanf("%d",&t);
while(t--)
{
          scanf("%ld",&n);
          if(n==1)
          printf("poor conductor\n");
          else
          {
              n--;
              r=n/5;
              if(n%5!=0)
              r++;
              printf("%ld ",r);
              if(r%2!=0)
              {
                        i=n%5;
                        switch(i)
                        {
                                 case 1:
                                      {
                                            printf("W L");
                                            break;
                                      }
                                 case 2:
                                      {
                                            printf("A L");
                                            break;
                                      }
                                 case 3:
                                      {
                                            printf("A R");
                                            break;
                                      }
                                 case 4:
                                      {
                                            printf("M R");
                                            break;
                                      }
                                 default:
                                      {
                                            printf("W R");
                                            break;
                                      }
                                 }
              }
              else
              {
                        i=n%5;
                        switch(i)
                        {
                                 case 1:
                                      {
                                            printf("W R");
                                            break;
                                      }
                                 case 2:
                                      {
                                            printf("M R");
                                            break;
                                      }
                                 case 3:
                                      {
                                            printf("A R");
                                            break;
                                      }
                                 case 4:
                                      {
                                            printf("A L");
                                            break;
                                      }
                                 default:
                                      {
                                            printf("W L");
                                            break;
                                      }
                                 }
              }    
              printf("\n");
          }
}
return 0;
}
