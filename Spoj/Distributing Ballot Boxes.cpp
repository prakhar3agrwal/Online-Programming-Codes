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
int i,j,k,n,m,s,t,ans,b,low,high,mid;
string x,y;
int a[5000005];

int noOfBallots(int oneBallot){
	int temp = 0;
	for(int i=0;i<n;i++){
		temp += a[i]/oneBallot;
		if(a[i]%oneBallot)
		temp++;
	}
	return temp;
}

int main()
{
while(1){
	scanf("%d%d",&n,&b);
	if(n == -1 && b == -1)
	return 0;
	high = low = 0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		high = max(high,a[i]);	
	}
	
	ans = high;
	low = 1;
	while(low<high){
		
		mid = low + (high - low)/2;
		int temp = noOfBallots(mid);
		if(temp == b){
			ans = min(ans,mid);
			high = mid;
		}
		else if(temp>b)
		low = mid + 1;
		else
		high = mid;
	}
	printf("%d\n",low);
}
}
