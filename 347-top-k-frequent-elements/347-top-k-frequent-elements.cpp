class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> res;
        
        unordered_map<int, int> m;
        
        vector<vector<int>> v;
        
        for(int i=0;i<nums.size();++i){

            m[nums[i]] = 0;
        }
        
        for(int i=0;i<nums.size();++i){
            
            m[nums[i]]++;
        }
        
        for(int i=1;i<100005;++i){
            
            vector<int> tmp = {};
            v.push_back(tmp);
        }
        
        for(auto i=m.begin();i!=m.end();++i){
            
            v[i->second].push_back(i->first);
        }
        
        int p = 100004;
        
        while(k && p>0){
            
            if(!v[p].empty()){
                
                for(int i=0;i<v[p].size();++i){
                    
                    res.push_back(v[p][i]);
                    k--;
                    
                }
                
            }
            p--;
            
        }
        
       return res; 
    }
};