class Solution {
public:
    vector<int> comb;
    vector<vector<int>> res;
    vector<vector<int>> combine(int n, int k) {
        backtrack(n,k);
        return res;
    }
    void backtrack(int n, int k, int start=1){
        if(comb.size()==k){
            res.push_back(comb);
            return;
        }
        for(int i=start;i<=n;++i){
            comb.push_back(i);
            backtrack(n, k, i+1);
            comb.pop_back();
        }
    }
};