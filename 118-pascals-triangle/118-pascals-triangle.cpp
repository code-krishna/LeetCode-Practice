class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> res;
        
        if(numRows==0) return res;
        
        for(int i=1;i<=numRows;++i){
            
            vector<int> curr;
            if(res.size()>0){
                curr.push_back(1);
                vector<int> top = res.back();
                for(int j=1;j<top.size();++j){
                    curr.push_back(top[j] + top[j-1]);
                }
            }
            curr.push_back(1);
            res.push_back(curr);
        }
        return res;
    }
};