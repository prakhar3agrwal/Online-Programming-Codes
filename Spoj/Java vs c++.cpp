#include<iostream>
#include<string.h>
using namespace std;
char a[101],b[101],c[101];
int l,f=0;
char und(int i,int j,char *c,int l)
{
     if(f!=1){
          if(c[i]>=97 && c[i]<=122)
          {
                 b[j]=c[i]-32;
                 j++;
                 i++;
          }
         else 
          {
                 cout<<"Error!\n";
                 f=1;
          }
     while(i<l && f==0)
     {
               if(c[i]=='_')
               {
                            i++;
                            und(i,j,c,l);
               }
               else if(c[i]>=97 && c[i]<=122)
               {
                   b[j]=c[i];
                   j++;
                   i++;
               }
               else
               {
                   cout<<"Error!\n";
                   f=1;
                   break;
               }
                   
     }
     if(i==l && f==0)
     {
             b[j]='\0';
             cout<<b<<"\n";f=1;
     }
}
}
void cap(int i,int j,char *c,int l)
{
     if(f!=1){
     if(c[i]>=65 && c[i]<=90)
     {
                 b[j]='_';
                 j++;
                 b[j]=c[i]+32;
                 j++;
                 i++;
     }
                 else 
                 {
                      cout<<"Error!\n";
                     f=1;
                 }
          
     
     while(i<l && f==0)
     {
               if(c[i]>=65 && c[i]<=90)
               cap(i,j,a,l);
               else if(c[i]>=97 && c[i]<=122)
               {
                   b[j]=c[i];
                   j++;
                   i++;
               }
                else
               {
                   cout<<"Error!\n";
                   f=1;
                   break;
               }
     }
     if(i==l && f==0)
     {
             b[j]='\0';
             cout<<b<<"\n";f=1;
     }
}
}
    
     
int main()
{
int l,i,j;
while(scanf("%s",&a)!=EOF){i=j=0;
l=strlen(a);
while(i<l && f==0)
{
          if(a[0]>=65 && a[0]<=90 || a[0]=='_')
          {
                      cout<<"Error!\n";
                      f=1;
                      break;
          }
          else if(a[i]=='_')
          {
                       i++;
                       und(i,j,a,l);
          }
          else if(a[i]>=65 && a[i]<=90)
          cap(i,j,a,l);
          else if(a[i]>=97 && a[i]<=122)
          {
               b[j]=a[i];
               j++;
               i++;
          }
           else
               {
                   cout<<"Error!\n";
                   f=1;
                   break;
               }
          
}
if(f==0)
{for(i=0;i<j;i++)
cout<<b[i];
cout<<"\n";
}f=0;
}
return 0;
}

