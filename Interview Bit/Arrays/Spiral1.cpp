vector<int> Solution::spiralOrder(const vector<vector<int> > &a) {
	vector<int> result;
	int i,j,k,l,r,u,d;
	l=0,d=a.size()-1,u=0,r=a[0].size()-1;
	while(l<=r && u<=d){
	    for(i=l;i<=r;i++)
	    result.push_back(a[u][i]);
	    u++;
	    for(i=u;i<=d;i++)
	    result.push_back(a[i][r]);
	    r--;
	    if(u<=d){
	        for(i=r;i>=l;i--)
	    result.push_back(a[d][i]);
	    d--;
	    }
	    if(l<=r){
	        for(i=d;i>=u;i--)
	    result.push_back(a[i][l]);
	    l++;
	    }
	    
	}
	return result;
}
