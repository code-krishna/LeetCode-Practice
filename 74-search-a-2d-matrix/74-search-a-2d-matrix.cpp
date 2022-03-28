class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=0;
        
        for(int i=0;i<matrix.size();++i){
            
            if(matrix[i][matrix[0].size()-1] > target){
                 row = i;
                 break;
            }
            
            else if(matrix[i][matrix[0].size()-1] == target){
                return true;
            }
        }
        
        for(int i=0;i<matrix[row].size();++i){
            
            if(matrix[row][i] == target)
                return true;
        }
        
        return false;
        
    }
};