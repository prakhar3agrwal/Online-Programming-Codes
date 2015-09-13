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
	int a[2005];
	long long int dp[2005][2005];
	long long int solve(int low, int high, int multiplier){
		if(dp[low][high] != 0)
		return dp[low][high];
		if(low == high)
		return dp[low][high] = multiplier * (long long int)a[low];
		else {
			dp[low][high] = max(solve(low,high-1,multiplier+1) + (multiplier * (long long int)a[high]),
			solve(low+1,high,multiplier+1) + (multiplier * (long long int)a[low]));
		}
		return dp[low][high];
	}
	int main()
	{
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	cout<<solve(1,n,1)<<"\n";
	}
