class Solution {
public:
    void dfs (vector<vector<char>> &grid , int rows, int col, int r,int c, int *ro, int *co){
        grid[r][c] = '0';
        for(int i=0;i<4;i++){
            if(r+ro[i] >=0 && r+ro[i]<rows && c+co[i]>=0 && c+co[i]<col && grid[r+ro[i]][c+co[i]] == '1')
            dfs(grid, rows, col, r+ro[i], c+co[i], ro ,co);
        }
    }
    int numIslands(vector<vector<char>> &grid) {
        
        int ro[] ={-1,0,0,1};
        int co[] ={0,-1,1,0};
        int rows= grid.size();
        int col;
        if(rows>0)
        col = grid[0].size();
        int ans=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    dfs(grid,rows,col,i,j,ro,co);
                    ans++;
                }
            }
        }
        
        return ans;
        
    }
};
