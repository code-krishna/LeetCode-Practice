class Solution {
public:
    bool isAnagram(string s, string t) {
        
        short s1[26] = {0,};
        short t1[26] = {0,};
        
        for(auto i: s){
            s1[i-'a']++;
        }
        
        for(auto i: t){
            t1[i-'a']++;
        }
        
        for(short i=0;i<26;++i){
            if(s1[i]!=t1[i]) return false;
        }
        
        return true;
    }
};