class Solution {
public:
    
    bool binSearch(vector<int> v, int target){
        
        int l=0, r=v.size()-1;
        
        while(l <= r){
            
            int mid = (l+r)/2;
            if(target == v[mid]) return true;
            
            if(target > v[mid]) l = mid+1;
               
            else r = mid-1;
            
        }
    
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=0;
        
        int l=0, r=matrix.size()-1;
        
        while(l <= r){
            
            row = (l+r)/2;
            //cout<<row<<"\n";
            
            if(row!=0){
                if(target < matrix[row][matrix[row].size()-1] && target > matrix[row-1][matrix[row].size()-1])
                    break;
            }
            
            if(target == matrix[row][matrix[row].size()-1]) return true;
               
            if(target < matrix[row][matrix[row].size()-1])
                r = row-1;
            
            else if(target > matrix[row][matrix[row].size()-1])
                l = row+1;
        }
        
        
        return binSearch(matrix[row], target);
        
    }
};