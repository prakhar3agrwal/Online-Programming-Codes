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


class CombiningSlimes {
public:
	int maxMascots(vector <int> a) {
		int i,j,k,n,ans=0;
		n=a.size();
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++)
			ans += a[i]*a[j];
		}
		return ans;
	}
};
