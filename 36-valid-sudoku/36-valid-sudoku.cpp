class Solution {
public:
    
    bool isValidVector(vector<char>& nums){
        
        int array[10] = {0,0,0,0,0,0,0,0,0,0};
        
        for(int i=0;i<nums.size();++i){
            if(nums[i]!='.'){
                if(array[nums[i]-'0']>0){
                    return false;
                }
                else{
                    array[nums[i]-'0']++;
                }
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;++i){
            
            vector<char> val;
            
            for(int j=0;j<9;++j){
                val.push_back(board[i][j]);
            }
            if(!isValidVector(val)) return false;
        }
        
        for(int i=0;i<9;++i){
            
            vector<char> val;
            
            for(int j=0;j<9;++j){
                val.push_back(board[j][i]);
            }
            if(!isValidVector(val)) return false;
        }
        
        for(int i=0;i<3;++i){
            
            for(int j=0;j<3;++j){
                vector<char> val;
                for(int p=3*i;p<3*i+3;++p){
                    for(int q=3*j;q<3*j+3;++q){
                        val.push_back(board[p][q]);
                    }
                    if(!isValidVector(val)) return false;
                }
                
            }
        }
        
        return true;
    }
};