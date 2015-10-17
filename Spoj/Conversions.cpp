#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n,i,j,l,k;
scanf("%d",&n);
char a[20];
float z,x;i=0;
while(n--)
{
          i++;
          scanf("%f",&z);
          scanf("%s",&a);x=0;
          if(strcmp(a,"kg")==0)
          {
                     x=z*2.2046;
                     cout<<i<<" ";
                     printf("%.4f",x);
                     cout<<" lb\n";
          }
          else if(strcmp(a,"l")==0)
          {
                     x=z*0.2642;
                     cout<<i<<" ";
                     printf("%.4f",x);
                     cout<<" g\n";
          }
           else if(strcmp(a,"lb")==0)
          {
                     x=z*0.4536;
                     cout<<i<<" ";
                     printf("%.4f",x);
                     cout<<" kg\n";
          }
          else  if(strcmp(a,"g")==0)
          {
                     x=z*3.7854;
                     cout<<i<<" ";
                     printf("%.4f",x);
                     cout<<" l\n";
          }
        
}
return 0;
}        
