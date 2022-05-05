class Solution {
public:
    bool isPalindrome(string s) {
        
        string s1="";
        int n = s.size();
        
        for(int i=0;i<n;++i){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s1+=(s[i] - 'A' + 'a');
            }
            else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                s1+=s[i];
            }
        }
        
        n = s1.size();
        
        for(int i=0;i<n/2;++i){
            if(s1[i]!=s1[n-1-i])
                return false;
        }
        
        return true;
        
    }
};