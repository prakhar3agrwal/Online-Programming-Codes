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
int i,j,k,n,m,s,t,ans,H,A;
int dp[1105][1105];
int solve(int health, int armour,int in){
	if(health<=0 || armour<=0)
	return 0;
	if(dp[health][armour]!=0)
	return dp[health][armour];
	if(in == 1)
	dp[health][armour] = (1 + max(solve(health-5, armour-10, 1-in),solve(health-20, armour+5,  1-in)));
	else
	dp[health][armour] = 1 + solve(health+3, armour+2,  1-in);
	return dp[health][armour];
}
int main()
{
cin>>t;
while(t--){
	cin>>H>>A;
	ans = solve(H+3,A+2,1);
	memset(dp,0,sizeof(dp));
	cout<<ans<<"\n";
	
}
}
