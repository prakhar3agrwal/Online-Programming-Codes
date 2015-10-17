#include<iostream>
#include<string.h>
#define Max 10000002
int tree[Max];
using namespace std;
int read(int idx)
{
	int sum = 0;
	while (idx > 0){
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}
void update(int idx)
{
	while (idx <=Max){
		tree[idx] +=1;
		idx += (idx & -idx);
	}
}
main()
{
int t,i,n,j;
long long int s;
scanf("%d",&t);
while(t--)
{
          scanf("%d",&n);
          int a[n];
          for(i=0;i<n;i++)
          scanf("%d",&a[i]);
          s=0;
          for(j=n-1;j>=0;j--)
          {
                    s+=read(a[j]-1);
                    update(a[j]);
          }
          printf("%lld\n",s);
          memset(tree,0,sizeof(tree));
         //memset(a,0,sizeof(a));
}
}
