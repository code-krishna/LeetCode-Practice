class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> res;
        
        unordered_map<int, int> m1;
        
        unordered_map<int, vector<int>> m2;
        
        for(int i=0;i<nums.size();++i){

            m1[nums[i]] = 0;
        }
        
        for(int i=0;i<nums.size();++i){
            
            m1[nums[i]]++;
        }
        
        for(int i=1;i<100005;++i){
            
            vector<int> v = {};
            
            m2[i] = v;
        }
        
        for(auto i=m1.begin();i!=m1.end();++i){
            
            m2[i->second].push_back(i->first);
        }
        
        int p = 100004;
        
        while(k && p>0){
            
            if(!m2[p].empty()){
                
                for(int i=0;i<m2[p].size();++i){
                    
                    res.push_back(m2[p][i]);
                    k--;
                    
                }
                
            }
            p--;
            
        }
        
       return res; 
    }
};