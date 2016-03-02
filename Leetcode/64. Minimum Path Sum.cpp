class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        int i,j,k,ans=0,n,m;
        n=grid.size();
        m=grid[0].size();
        for(i=1;i<n;i++)
        grid[i][0]+=grid[i-1][0];
        for(i=1;i<m;i++)
        grid[0][i]+=grid[0][i-1];
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            grid[i][j]=grid[i][j]+min(grid[i-1][j],grid[i][j-1]);
        }
        return grid[n-1][m-1];
        
        
    }
};
