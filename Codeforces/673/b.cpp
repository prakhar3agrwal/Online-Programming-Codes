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
#include<set>
using namespace std;
int i,j,k,n,m,s,t,ans,x,y;
int main()
{
cin>>n>>m;
set <int> div1, div2;
set <int> ::iterator it;
bool cal = true;
for(i=0;i<m;i++){
	cin>>j>>k;//cout<<"hello "<<cal<<"\n"; 
	if(!cal)
	continue;
	if(j>k)
	swap(j,k);
	if(!div1.empty())
		x = *div1.begin();//cout<<x<<"dsa";
	it = div1.find(j);
	if(it!=div1.end()){
		cal=false;
		continue;
	}
	if(!div2.empty())
		y = *div2.rbegin();//cout<<y<<"gfsa\n";
	it = div2.find(k);
	if(it!=div2.end()){
		cal=false;
		continue;
	}//cout<<x<<" "<<y<<" "<<j<<" "<<k<<" "<<" "<<cal<<"\n\n";
	if(x > 0 && y >0 && (j>=x || y>=k)){
		cal=false;
		continue;
	}
	div1.insert(k);
	div2.insert(j);
}
if(!cal){
	cout<<"0";
	return 0;
}
if(m==0){
	cout<<n-1;
	return 0;
}
if(!div1.empty())
	x = *div1.begin();
	
if(!div2.empty())
	y = *div2.rbegin();

cout<<x-y;
}

