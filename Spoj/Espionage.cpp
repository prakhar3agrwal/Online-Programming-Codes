#include<iostream>
using namespace std;
int main()
{
int n,m,i=0,j,k,f,t,i1=0;
scanf("%d",&t);
while(t--)
{
	scanf("%d%d",&n,&m);
	int a[10001]={0};
	i1++;f=0;
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&j,&k);
		if(f==0){
		if(a[j]==2)
		f=1;
		else
		a[j]=1;
		if(a[k]==1)
		f=1;
		else
		a[k]=2;}
	}
	if(f==0)
	printf("Scenario #%d: spying\n",i1);
	else
	printf("Scenario #%d: spied\n",i1);
}
}
