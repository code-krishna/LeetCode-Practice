class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j){
        
        if(i>=grid.size() || j>=grid[0].size() || j<0 || i<0)
            return;
        
        if(grid[i][j]=='0') 
            return;
        
        grid[i][j] = '0';
        
        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j-1);
        dfs(grid, i, j+1);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int res=0;
        
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[i].size();++j){
                if(grid[i][j]=='1'){
                    dfs(grid, i, j);
                    res++;
                }
            }
        }
        
        return res;
    }
};