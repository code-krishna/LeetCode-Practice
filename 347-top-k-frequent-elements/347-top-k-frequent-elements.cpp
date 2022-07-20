class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> res;
        
        unordered_map<int, int> m;
        
        int p=nums.size();
        
        for(auto i : nums){
            m[i]++;
        }
        
        vector<vector<int>> v(p+1);
        
        for(auto i=m.begin();i!=m.end();++i){
            v[i->second].push_back(i->first);
        }
        
        while(k){
            
            if(!v[p].empty()){
                
                res.insert(res.end(), v[p].begin(), v[p].end());
                k -= v[p].size();
            }
            p--;
        }
        
       return res; 
    }
};