class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        unordered_map<char,int> m1, m2;
        
        if(s1.size() >  s2.size()) return false;
        
        for(int i=0;i<26;++i){
            m1['a' + i] = 0;
            m2['a' + i] = 0;
        }
        
        for(int i=0;i<s1.size();++i){
            m1[s1[i]]++;
            m2[s2[i]]++;
            
        }
        
        int matches = 0;
        
        for(int i=0;i<26;++i){
            if(m1['a'+i] == m2['a'+i])
                matches++;
        }
        
        int left=0,right=s1.size()-1;
        
        while(right<s2.size()){
            
            if(matches==26) return true;
            
            m2[s2[left]]--;
            
            if(m2[s2[left]] == m1[s2[left]]){
                matches++;
            }
            else if(m2[s2[left]] + 1 == m1[s2[left]]){
                matches--;
            }
            
            left++;
            right++;
            
            m2[s2[right]]++;
            
            if(m2[s2[right]]  == m1[s2[right]]){
                matches++;
            }
            else if(m2[s2[right]] - 1 == m1[s2[right]]){
                matches--;
            }
            
        }
        
        return matches==26;
    }
};