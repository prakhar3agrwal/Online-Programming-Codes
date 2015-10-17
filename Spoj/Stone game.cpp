#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
int n,i,j,num,*a,c=-1,k=0,f;
cin>>n;
for(i=0;i<n;i++)
{
                k=0;
                c=-1;
                cin>>num;
                a=new int[num+1];
                a[0]=0;
                for(j=1;j<=num;j++)
                cin>>a[j];
                while(1)
                {
                            f=0;
                for(j=1;j<=num;j++)
                {
                                   if(a[j]>=j)
                                   {
                                              a[j]-=j;f=1;
                                              c++;break;
                                   }
                }
                if(f==0)
                break;
                //k++;
                }
                if(c%2!=0 || c==-1 )
                cout<<"BOB\n";
                else
                cout<<"ALICE\n";
                delete a;
}
//getch();
return 0;
}
