class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(grid[i][j]==2){
                    pair<int, int> p(i,j);
                    q.push(p);
                }
            }
        }
        int min=0;
        while(!q.empty()){
            int sz = q.size();
            min++;
            for(int k=0;k<sz;++k){
                pair<int,int> p = q.front();
                q.pop();
                int i = p.first;
                int j = p.second;
                if(i>0){
                    if(grid[i-1][j]==1){
                        grid[i-1][j]=2;
                        p = make_pair(i-1,j);
                        q.push(p);
                    }
                }
                if(i<grid.size()-1){
                    if(grid[i+1][j]==1){
                        grid[i+1][j]=2;
                        p = make_pair(i+1,j);
                        q.push(p);
                    }
                }
                if(j>0){
                    if(grid[i][j-1]==1){
                        grid[i][j-1]=2;
                        p = make_pair(i,j-1);
                        q.push(p);
                    }
                }
                if(j<grid[0].size()-1){
                    if(grid[i][j+1]==1){
                        grid[i][j+1]=2;
                        p = make_pair(i,j+1);
                        q.push(p);
                    }
                }
            }
        }
        
        for(int i=0;i<grid.size();++i){
            for(int j=0;j<grid[0].size();++j){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        if(min==0) return 0;
        else return min-1;
    }
};