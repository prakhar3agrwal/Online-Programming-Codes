#include<iostream>
#include<fstream>
using namespace std;
int main()
{
unsigned long long int i,j,k,l;
fstream f;
f.open("perfect_cubes.txt",ios::out);
for(i=6;i<=100;i++)
{
                  for(j=1;j<=100;j++)
                  {
                                     for(k=j+1;k<=100;k++)
                                     {
                                                        for(l=k+1;l<=100;l++)
                                                        if(i*i*i==(j*j*j)+(k*k*k)+(l*l*l))
                                                       {cout<<i<<j<<k<<l; f<<"Cube = "<<i<<", Triple = ("<<j<<","<<k<<","<<l<<")\n";
                                                       }
                                     }
                  }
}
f.close();
}
