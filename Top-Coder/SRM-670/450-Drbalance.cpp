#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class Drbalance {
public:
	int  negativity(string s){
		int x=0,y=0;
		for(int i=0;i<s.length();i++){
			if(s[i] == '+')
			x++;
			else
			x--;
			if(x<0)
			y++;
		}
		return y;
		
	}
	int lesscng(string s, int k1) {
		int i,j,k,l,ans=0,x;
		l=s.length();
		k=0;j=0;

		if(negativity(s)<=k1)
		return 0;
		for(i=0;i<l;i++){
			if(s[i]=='-')
			{
				ans++;
				s[i] = '+';
			}
			if(k1>=negativity(s))
			return ans;
			
		}
	}
};
