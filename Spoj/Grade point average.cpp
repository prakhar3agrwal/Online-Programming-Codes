#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
int n,i,a[6],f,j,l,k,k1;
float b[6][5],s1,s2,s3,sum,s,y,m,d;
char z[10];
scanf("%d",&n);
while(n--)
{
          sum=s=0;f=0;
          for(i=0;i<6;i++)
          {
                          scanf("%d",&a[i]);
                          sum+=a[i];
          }
          for(i=0;i<6;i++)
          {
                          for(j=0;j<5;j++)
                          {
                                          cin>>z;
                                          if(z[0]=='a')
                                          b[i][j]=0;
                                          else
                                          {
                                              l=strlen(z);
                                              k=0;y=0;m=0;k1=0;
                                              while(z[k]!='\0' && z[k]!='.')
                                              {
                                                   y=y*10+(z[k]-48);
                                                   k++;
                                              }
                                              if(k!=l)
                                              {k++;k1=k;
                                              while(z[k]!='\0')
                                              {
                                                          m=m*10+(z[k]-48);
                                                          k++;
                                              }
                                              y+=float(m/(pow(10,(l-k1))));
                                              }
                                              b[i][j]=y;  
                                                  
                                          }
                          }
          }
          
          for(i=0;i<6;i++)
          {
                          for(k=0;k<2;k++)
                          {
                                          for(l=0;l<2;l++)
                                          if(b[i][l]>b[i][l+1])
                                          {
                                                               d=b[i][l];
                                                               b[i][l]=b[i][l+1];
                                                               b[i][l+1]=d;
                                          }
                          }
                          s1=(b[i][2]+b[i][1])*45/40;
                          s1+=b[i][3]/2;
                          if(b[i][4]<51)
                          b[i][4]=5;
                          else if(b[i][4]<61)
                          b[i][4]=4;
                          else if(b[i][4]<71)
                          b[i][4]=3;
                          else if(b[i][4]<81)
                          b[i][4]=2;
                          else if(b[i][4]<91)
                          b[i][4]=1;
                          else b[i][4]=0;
                          s1+=b[i][4];
                          if(s1>=91)
                          s1=10;
                          else if(s1>=81)
                          s1=9;
                          else if(s1>=71)
                          s1=8;
                          else if(s1>=61)
                          s1=7;
                          else if(s1>50)
                          s1=6;
                          else if(s1==51)
                          s1=5;
                          else if(s1<50)
                          s1=0;
                          if(s1==0)
                          f=1;
                          s+=s1*a[i];
                          
          }
          if(f==1)
          cout<<"FAILED, ";
          else
          cout<<"PASSED, ";
          printf("%0.2f\n",s/sum);
}
}                       
