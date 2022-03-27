class Solution {
public:
    
    void reverseString(string &s, int l, int r){
        
        while(l<r){
            
            char tmp = s[l];
            s[l] = s[r];
            s[r] = tmp;
            l++; r--;
        }
        
    }
    
    string reverseWords(string s) {
        
        int l=0, r=0;
        
        while(l<s.size()){
            
            while(r<s.size() && s[r]!=' '){
                r++;
            }
            
            reverseString(s, l, r-1);
            r++; l = r;
        }
        
        return s;
    }
};