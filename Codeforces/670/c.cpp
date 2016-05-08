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
int movies[200005][2];
int main()
{
cin>>n;
map<int,int>scientists;
for(i = 0; i<n ;i++){
	cin>>j;
	scientists[j]++;
}
cin>>m;
for(i=0;i<m;i++){
	cin>>movies[i][0];
}
for(i=0;i<m;i++){
	cin>>movies[i][1];
}
int pleased = scientists[movies[0][0]];
int slightly_pleased = scientists[movies[0][1]];
for(i=1;i<m;i++){
	if(scientists[movies[i][0]] > pleased){
		pleased = scientists[movies[i][0]];
		slightly_pleased = scientists[movies[i][1]];
		ans = i;
	}
	else if(scientists[movies[i][0]] == pleased && scientists[movies[i][1]] > slightly_pleased){
		pleased = scientists[movies[i][0]];
		slightly_pleased = scientists[movies[i][1]];
		ans = i;
	}
}
cout<<ans+1;
}

