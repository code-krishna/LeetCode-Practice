class Solution {
public:
    vector<vector<int>> res;
    vector<int> perm;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> visited;
        for(int i=0;i<nums.size();++i){
            visited.push_back(0);
        }
        backtrack(nums, visited);
        return res;
    }
    
    void backtrack(vector<int> numbers, vector<int> visited){
        if(perm.size()==numbers.size()){
            res.push_back(perm);
        }
        for(int i=0;i<numbers.size();++i){
            if(!visited[i]){
                visited[i]=1;
                perm.push_back(numbers[i]);
                backtrack(numbers, visited);
                perm.pop_back();
                visited[i] = 0;
            }
        }
    }
};