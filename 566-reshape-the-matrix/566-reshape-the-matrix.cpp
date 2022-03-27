class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        if(mat.size()==0) return mat;
        
        int r1 = mat.size();
        int c1 = mat[0].size();
        
        if(r1*c1 != r*c) return mat;
        
        vector<vector<int>> result;
        
        int r2=0, c2=0;
        
        for(int i=0;i<r;++i){
            
            vector<int> tmp;
            
            for(int j=0;j<c;++j){
                
                if(c2>=c1){
                    r2++;
                    c2=0;
                }
                if(r2<r1 && c2<c1){
                  tmp.push_back(mat[r2][c2++]);   
                }
                
            }
            result.push_back(tmp);
        }
        return result;
        
    }
};