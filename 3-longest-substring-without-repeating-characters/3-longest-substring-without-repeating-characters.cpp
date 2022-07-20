class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int l=0,r=0, result = 0;
        unordered_map<char,int> m;
        
        for(int i=0;i<s.size();++i){
            m[s[i]] = 0;
        }
        
        while(l <= r && r<s.size()){
            
            if(m[s[r]]<=0){
                m[s[r]]++;
                if(r-l+1 > result) result = r-l+1;
                r++;
            }
            else{
                m[s[l++]]--;
            }
        }
        
        return result;
    }
};