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
int main()
{
cin>>n;
k = 0;
bool cal = true;
for(i=0;i<n;i++){
	cin>>j;
	if(!cal)
	continue;
	if(j-k>15){
		cal=false;
		ans = k+15;
	}
	k =j;
}
if(cal)
ans = min(90,k+15);
cout<<ans;
}

