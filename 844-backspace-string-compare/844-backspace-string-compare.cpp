class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        vector<char> v1, v2;
        
        for(int i=0;i<s.size();++i){
            
            if(s[i]=='#'){
                if(v1.empty()) continue;
                v1.pop_back();
            }
            else{
                v1.push_back(s[i]);
            }
        }
        
        for(int i=0;i<t.size();++i){
            
            if(t[i]=='#'){
                if(v2.empty()) continue;
                v2.pop_back();
            }
            else{
                v2.push_back(t[i]);
            }
        }
        
        if(v1.size()!=v2.size()) return false;
        
        for(int i=0;i<v1.size();++i){
            if(v1[i]!=v2[i]) return false;
        }
        
        return true;
        
    }
};