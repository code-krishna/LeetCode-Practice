class Solution {
public:
    vector<vector<int>> res;
    vector<int> perm;
    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(nums);
        return res;
    }
    
    void backtrack(vector<int> numbers){
        if(perm.size()==numbers.size()){
            res.push_back(perm);
        }
        for(int i=0;i<numbers.size();++i){
            if(numbers[i]!=100){
                int tmp = numbers[i];
                numbers[i]=100;
                perm.push_back(tmp);
                backtrack(numbers);
                perm.pop_back();
                numbers[i] = tmp;
            }
        }
    }
};