class Solution {
public:
    int uniquePaths(int n, int m) {
        int i,j;
        int grid[n][m];
        grid[0][0]=1;
        for(i=1;i<n;i++)
        grid[i][0]=1;
        for(i=1;i<m;i++)
        grid[0][i]=1;
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            grid[i][j]=grid[i-1][j]+grid[i][j-1];
        }
        return grid[n-1][m-1];
    }
};
