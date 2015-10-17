#include<iostream>
using namespace std;
int main()
{
int t,i,x,j=0,m=0,in,max;
char b[10000];
scanf("%d",&t);
char ch=getchar();
while(t--)
{
          int a[26]={0};max=0;
         cin.getline(b,10000);
         if(b[0]!='\0' && b[0]!='\t' && b[0]!=' ' && b[0]!='\r'){
         i=0;
         m=0;
         while(b[i]!='\0')
         {
                          if(b[i]!=' '){
                          x=int(b[i])-69;
                          if(x<0)
                          {x+=26;}
                          a[x]++;
                          if(a[x]>m)
                          {
                                    m=a[x];
                                    in=x;
                          }}
                          i++;
         }x=in;for(i=0;i<26;i++)if(a[i]==m)max++;
         i=0;
         if(max==1)
         {printf("%d ",in);
         while(b[i]!='\0')
        {
                          if(b[i]!=' '){
                          m=(int(b[i])-x);
                          if(m<65)
                          m=91+(m-65);
                          printf("%c",char(m));}
                          else printf(" ");
                          i++;
        }printf("\n");
        }
        else
        printf("NOT POSSIBLE\n");}else
        t++;
                          
}
}  
