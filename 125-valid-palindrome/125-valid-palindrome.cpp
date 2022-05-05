class Solution {
public:
    bool isPalindrome(string s) {
        
        string s1="";
        
        for(int i=0;i<s.size();++i){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s1+=(s[i] - 'A' + 'a');
            }
            else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                s1+=s[i];
            }
        }
        
        for(int i=0;i<s1.size()/2;++i){
            if(s1[i]!=s1[s1.size()-1-i])
                return false;
        }
        
        return true;
        
    }
};