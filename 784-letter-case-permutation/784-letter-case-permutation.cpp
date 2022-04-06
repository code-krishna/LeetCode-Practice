class Solution {
public:
    string tmp;
    vector<string> res;
    vector<string> letterCasePermutation(string s) {
        backtrack(s, 0);
        return res;
    }
    
    void backtrack(string s, int idx){
        if(idx==s.size()){
            res.push_back(s);
            return;
        }
        
        if(s[idx] >= 'a' && s[idx] <= 'z'){
            backtrack(s, idx+1);
            s[idx] = s[idx] - 'a' + 'A';
            backtrack(s, idx+1);
        }
        
        else if(s[idx] >= 'A' && s[idx] <= 'Z'){
            backtrack(s, idx+1);
            s[idx] = s[idx] + 'a' - 'A';
            backtrack(s, idx+1);
        }
        
        else{
            backtrack(s, idx+1);
        }
    }
};