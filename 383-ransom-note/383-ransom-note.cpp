class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        short m[26]={0,}, r[26]={0,};
        
        for(auto i: magazine){
            m[i-'a']++;
        }
        
        for(auto i: ransomNote){
            r[i-'a']++;
        }
        
        for(int i=0;i<26;++i){
            if(r[i] > m[i]) return false;
        }
        return true;
    }
};