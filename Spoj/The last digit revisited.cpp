#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{ int t,l;
  unsigned long long int a,b,c;
  char z[1001];
  cin>>t;
  while(t--)
       { cin>>z>>b;
       l=strlen(z);
       a=z[l-1]-48;
         if(b==0)
             { cout<<"1"<<endl;
             
             }
         else
             { b=b%4;
               if(b==0)
                  { c=pow(a,4);
                    cout<<c%10<<endl;
                  } 
               else                  
                  { c=pow(a,b);
                    cout<<c%10<<endl;
                  }
             }     
       }
}                 
                     

