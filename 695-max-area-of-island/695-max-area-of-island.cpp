class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int max_size = 0;
        
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(grid[i][j]==1){
                    int max_till_now = dfs(grid, i, j);
                    if(max_till_now > max_size)
                        max_size = max_till_now;
                }
            }
        }
        
        return max_size;
        
    }
    
    int dfs(vector<vector<int>>& grid, int r, int c){
        
        
        if(r>grid.size()-1 || r<0 || c<0 || c>grid[0].size()-1) return 0;
        
        if(grid[r][c]==0) return 0;
        
        grid[r][c] =  0;
        
        return (1 + dfs(grid, r+1, c) + dfs(grid, r, c+1) + dfs(grid, r-1, c) + dfs(grid, r, c-1));
        
    }
};