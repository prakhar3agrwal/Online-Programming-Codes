#include <cstdio>
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool helper(vector<long> k, vector<long> l)
{
   return (k[1] < l[1]);
}

int main()
{
   int  n, c, i, p, a,t,j,k;
   scanf("%d",&t);
   while(t--){
   vector< vector<long> > farmers;
   vector<long> farmer(2,0);
   scanf("%d",&n);

   for (i=0; i<n; ++i)
   {
      scanf("%d%d",&p,&a);
      farmer[0] = p;
      farmer[1] = a;
      farmers.push_back(farmer);
   }


   sort(farmers.begin(),farmers.end(),helper);
   c=1;j=farmers[0][1];
   for(i=1;i<n;i++)
   {
                   
                   if(farmers[i][0]>=j)
                   {
                                   c++;
                                   j=farmers[i][1];
                   }
   }    
   //for(i=0;i<n;i++)cout<<farmers[i][0]<<" "<<farmers[i][1]<<"\n";
   printf("%d\n",c);
}
   system("pause");
}
