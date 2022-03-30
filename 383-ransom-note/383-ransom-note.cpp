class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int m[26]={0,}, r[26]={0,};
        
        for(int i=0;i<magazine.size();++i){
            m[magazine[i]-'a']++;
        }
        
        for(int i=0;i<ransomNote.size();++i){
            r[ransomNote[i]-'a']++;
        }
        
        for(int i=0;i<26;++i){
            if(r[i] > m[i]) return false;
        }
        return true;
    }
};