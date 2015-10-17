#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[100],b[100];
string c[5][2]={"A#","Bb",
                "C#","Db",
                "D#","Eb",
               	"F#","Gb",
                "G#","Ab"};
int i,j,f,l,k=0;
while(scanf("%s%s",&a,&b)!=EOF)
{
                               l=strlen(a);
                               k++;
                               f=0;
                               printf("Case %d: ",k);
                               if(l==1)
                               printf("UNIQUE\n");
                               else 
                               {
                                    /*if(strcmp(b,"minor")==0)
                                    {
                                     if((strcmp(a,"G#")==0) || (strcmp(a,"Bb")==0) || (strcmp(a,"C#")==0) ||(strcmp(a,"Eb")==0) ||(strcmp(a,"F#")==0))
                                     {printf("UNIQUE\n");
                                     f=1;}
                                    }
                                    else if(strcmp(b,"major")==0)
                                    {
                                        if((strcmp(a,"Bb")==0) || (strcmp(a,"Db")==0)||(strcmp(a,"Eb")==0) || (strcmp(a,"F#")==0) ||(strcmp(a,"Ab")==0)) 
                                        {printf("UNIQUE\n");
                                        f=1;}
                                    }*/
                                   // if(f==0)
                                    {
                                        if(a[1]=='#')
                                        {
                                                     for(i=0;i<5;i++)
                                                     {
                                                                     if(c[i][0][0]==a[0])
                                                                     {
                                                                                         cout<<c[i][1]<<" "<<b<<"\n";
                                                                                         break;
                                                                     }
                                                     }
                                        }
                                        else
                                        {
                                            for(i=0;i<5;i++)
                                            {
                                                            if(c[i][1][0]==a[0])
                                                            {
                                                                                cout<<c[i][0]<<" "<<b<<"\n";
                                                                                break;
                                                            }
                                            }
                                        }
                                    }
                               }
}
}
                                                                                
                                     

