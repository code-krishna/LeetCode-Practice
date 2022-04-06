class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> res;
        backtrack(n, 1, k, {}, res);
        return res;
    }
    void backtrack(int n, int start, int k, vector<int> comb, vector<vector<int>> &res){
        if(comb.size()==k){
            res.push_back(comb);
            return;
        }
        for(int i=start;i<=n;++i){
            comb.push_back(i);
            backtrack(n, i+1, k, comb, res);
            comb.pop_back();
        }
    }
};