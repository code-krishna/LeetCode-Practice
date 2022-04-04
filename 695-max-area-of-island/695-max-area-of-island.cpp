class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int max_size = 0;
        
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(grid[i][j]==1){
                    int max_till_now = 0;
                    dfs(grid, i, j, max_till_now);
                    if(max_till_now > max_size)
                        max_size = max_till_now;
                }
            }
        }
        
        return max_size;
        
    }
    
    void dfs(vector<vector<int>>& grid, int r, int c, int& max_till_now){
        
        if(grid[r][c]==0) return;
        
        grid[r][c] =  0;
        max_till_now++;
        
        if(r<grid.size()-1){
            if(grid[r+1][c]==1)
                dfs(grid, r+1, c, max_till_now);
        }
        
        if(r>0){
            if(grid[r-1][c]==1)
                dfs(grid, r-1, c, max_till_now);
        }
        
        if(c>0){
            if(grid[r][c-1]==1)
                dfs(grid, r, c-1, max_till_now);
        }
        
        if(c<grid[0].size()-1){
            if(grid[r][c+1]==1)
                dfs(grid, r, c+1, max_till_now);
        }
        
    }
};