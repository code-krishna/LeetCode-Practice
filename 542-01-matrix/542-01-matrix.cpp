class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<mat.size();++i){
            for(int j=0;j<mat[0].size();++j){
                if(mat[i][j]!=0){
                    mat[i][j]=-1;
                }
                else{
                    pair<int, int> p(i,j);
                    q.push(p);
                    //cout<<i<<" "<<j<<endl;
                }
            }
        }
        int level = 1;
        while(!q.empty()){
            int sz = q.size();
            for(int k=0;k<sz;++k){
                pair<int,int> p = q.front();
                q.pop();
                int i = p.first;
                int j = p.second;
                if(i>0){
                    if(mat[i-1][j]==-1){
                        mat[i-1][j]=level;
                        p = make_pair(i-1,j);
                        q.push(p);
                    }
                }
                if(i<mat.size()-1){
                    if(mat[i+1][j]==-1){
                        mat[i+1][j]=level;
                        p = make_pair(i+1,j);
                        q.push(p);
                    }
                }
                if(j>0){
                    if(mat[i][j-1]==-1){
                        mat[i][j-1]=level;
                        p = make_pair(i,j-1);
                        q.push(p);
                    }
                }
                if(j<mat[0].size()-1){
                    if(mat[i][j+1]==-1){
                        mat[i][j+1]=level;
                        p = make_pair(i,j+1);
                        q.push(p);
                    }
                }
            }
            level++;
        }
        return mat; 
    }
};