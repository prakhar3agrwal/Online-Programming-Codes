#include<iostream>
using namespace std;
main()
{
int i,j,k,n,l,m;
scanf("%d",&n);
j=n/2;l=0;
for(i=0;i<n/2;i++)
{
                  if(i==0){
          for(k=0;k<j;k++)
          printf(" ");
                          printf("*\n");
          }
          else
          {
              for(m=0;m<j;m++)
              printf(" ");
              printf("*");
              for(k=0;k<2;k++)
              {
                              for(m=0;m<l;m++)
                              printf(" ");
                              printf("*");
              }
              printf("\n");
              l++;
         
          }
           j--;
          
}
for(i=0;i<n;i++)
printf("*");
printf("\n");
l=n/2-2;j=1;
for(i=0;i<n/2;i++)
{
              /*    if(i==0){
          for(k=0;k<j;k++)
          printf(" ");
                          printf("*\n");
          }*/
          if(i!=n/2-1)
          {
              for(m=0;m<j;m++)
              printf(" ");
              printf("*");
              for(k=0;k<2;k++)
              {
                              for(m=0;m<l;m++)
                              printf(" ");
                              printf("*");
              }
              printf("\n");
              l--;
         
          }
          else{
               for(k=0;k<j;k++)
          printf(" ");
                          printf("*\n");
          }
          
           j++;
           
          
}

system("pause");
}
                              
                              
