class Solution {
public:
    bool isValid(string s) {
        
        vector<char> v;
        int i;
        
        for(i=0;i<s.size();++i){
            
            
            if(s[i]=='{' || s[i]=='(' || s[i]=='['){
                v.push_back(s[i]);
            }
            
            else if(!v.empty()){
                if(s[i]=='}' && v.back()=='{')
                    v.pop_back();
                else if(s[i]==']' && v.back()=='[')
                    v.pop_back();
                else if(s[i]==')' && v.back()=='(')
                    v.pop_back();
                else
                    break;
            }
            
            else
                break;
            
        }
        bool result = (v.empty() && i==s.size()) ? true : false;
        return result;
        
    }
};