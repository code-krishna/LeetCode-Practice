class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> res;
        
        unordered_map<int, int> m;
        
        for(auto i : nums){
            m[i]++;
        }
        
        vector<vector<int>> v(nums.size()+1);
        
        for(auto i=m.begin();i!=m.end();++i){
            v[i->second].push_back(i->first);
        }
        
        int p=nums.size();
        
        while(k){
            
            for(int i=0;i<v[p].size();++i){
                res.push_back(v[p][i]);
                k--;
            }
            p--;
        }
        
       return res; 
    }
};