class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string s;
        generateUtil(result, s, 0, 0, n);
        return result;
    }
    
    void generateUtil(vector<string> &v, string &s, int l, int r, int n){
        if(l+r==n+n){
            v.push_back(s);
            return;
        }
        
        if(l<n){
            s.push_back('(');
            generateUtil(v,s,l+1,r,n);
            s.pop_back();
        }
        if(r<l){
            s.push_back(')');
            generateUtil(v,s,l,r+1,n);
            s.pop_back();
        }
    }
};