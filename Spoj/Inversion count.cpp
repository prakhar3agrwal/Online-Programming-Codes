#include<iostream>
#include<string.h>
#include<map>
#define Max 30005
int tree[Max],a[Max];
using namespace std;

int read(int idx){
int sum = 0;
while (idx > 0){
sum += tree[idx];
idx -= (idx & -idx);
}
return sum;
}
void update(int idx){
while (idx <= Max){

tree[idx] += 1;
idx += (idx & -idx);
}
}
main()
{
int t,i,n,j;
int s;
scanf("%d",&t);
while(t--)
{
          //getchar();
          scanf("%d",&n);
          char c[n][25],b[n][25];
          map <string , int> m;
          for(i=0;i<n;i++)
          scanf("%s",&c[i]);
          for(i=0;i<n;i++)
          {
                          scanf("%s",&b[i]);
                          m[b[i]]=i+1;
          }
          for(i=0;i<n;i++)
          a[i]=m[c[i]];
          s=0;
          for(j=n-1;j>=0;j--)
          {
                    s+=read(a[j]-1);
                    update(a[j]);
          }
          printf("%d\n",s);
          memset(tree,0,sizeof(tree));
          memset(a,0,sizeof(a));
}
}


