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


class BearSong {
public:
	int countRareNotes(vector <int> a) {
	int i,j,k,n,ans=0;
	n = a.size();
	int f[1005]= {0};
	for(i=0;i<n;i++)
	f[a[i]] ++;
	for(i=0;i<1005;i++)
	if(f[i]==1)
	ans++;
	return ans;
		
	}
};

