
/*
author-Prakhar Agrawal
handle-prakhar3agrwal
*/
#include<algorithm>
#include<iostream>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<cstdio>
#include<vector>
#include<queue>
#include<stack>
#include<map>
using namespace std;
int i,j,k,n,m,s,t,ans,row[105],col[105];
string x[105],y;
int main()
{
cin>>n;
for(i=0;i<n;i++)
cin>>x[i];
for(i=0;i<n;i++)
for(j=0;j<n;j++){
	if(x[i][j]=='C'){
		row[i]++;
		col[j]++;
	}
}
for(i=0;i<105;i++)
ans+= ((row[i]*(row[i]-1))/2 + (col[i]*(col[i]-1))/2);
cout<<ans;
}

