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
int i,j,k,n,m,s,t,ans;
string x,y;
int dp0[105][105], dp1[105][105];
int main()
{
cin>>t;
dp0[1][0] = dp1[1][0] = 1;
dp0[2][0] = 2; dp1[2][0] = 1;
dp1[2][1] = 1;
for(i=3; i<105; i++){
	for(j=0; j<105;j++){
		dp1[i][j] = dp0[i-1][j];
		dp0[i][j] = dp1[i-1][j] + dp0[i-1][j];
		if(j != 0){
			dp1[i][j] += dp1[i-1][j-1];
		}
		
	}
}
while(t--){
	cin>>i>>n>>k;
	cout<<i<<" "<<dp1[n][k] + dp0[n][k]<<"\n";
}
}
