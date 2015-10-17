#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int t,i,j,a,b,c,d;
char x[4][4],y[100];
while(1)
{
          scanf("%s",&y);
          if(strcmp(y,"end")==0)
          break;
          a=b=c=d=0;
          for(i=0;i<10;i++)
          x[i/3][i%3]=y[i];
          for(i=0;i<3;i++)
          {
                          if(x[i][0]==x[i][1] && x[i][1]==x[i][2])
                          {
                                              if(x[i][2]=='X')
                                              c++;
                                              else if(x[i][2]=='O')
                                              d++;
                          }
          }
          for(i=0;i<3;i++)
          {
                          if(x[0][i]==x[1][i] && x[1][i]==x[2][i])
                          {
                                              if(x[2][i]=='X')
                                              c++;
                                              else if(x[2][i]=='O')
                                              d++;
                          }
          }
          if(x[0][0]==x[1][1] && x[1][1]==x[2][2])
          {
                              if(x[2][2]=='X')
                              c++;
                              else if(x[2][2]=='O')
                              d++;
          }
          if(x[0][2]==x[1][1] && x[1][1]==x[2][0])
          {
                              if(x[2][0]=='X')
                              c++;
                              else if(x[2][0]=='O')
                              d++;
          }
          for(i=0;i<3;i++)
          {for(j=0;j<3;j++)
          {if(x[i][j]=='X')
          a++;
          else if(x[i][j]=='O')
          b++;} }
          if((a==b && c==0 && d==1) || (a-b==1 && c>0 && d==0)||(a-b==1 && d==0 && c==0 && a==5))
          cout<<"valid\n";
          else
          cout<<"invalid\n";
}
}
