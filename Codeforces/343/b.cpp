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
int male[400], female[400];
int main()
{
cin>>n;
for(i=0;i<n;i++){
	cin>>x>>j>>k;
	if(x[0] == 'M'){
		male[j]++;
		male[k+1]--;
	}
	else{
		female[j]++;
		female[k+1]--;
	}
}
j=k=0;
for(i=0;i<400;i++){
	male[i] += j;
	j = male[i];
	female[i] += k;
	k = female[i];
	ans = max(ans, min(male[i], female[i]));
}

cout<<2*ans;
}

