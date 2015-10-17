#include<stdio.h>
#include<string.h>
#define Max 10000002
int tree[Max],a[Max];
long long int b[Max];
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
int t,i,n,j,k;
long long int s;i=0;
while(scanf("%d",&a[i])!=EOF)
{
          a[i]+=1000000;
          i++;
}k=0;
for(j=i-1;j>=0;j--)
{
           s=0;
           s+=read(a[j]-1);
           update(a[j]);
           b[k]=s;
           k++;
 }
 for(k=i-1;k>=0;k--)
 printf("%lld ",b[k]);
 return 0;
}


