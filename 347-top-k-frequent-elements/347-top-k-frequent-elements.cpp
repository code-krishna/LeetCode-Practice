class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> res;
        
        unordered_map<int, int> m;
        
        int max_cnt=0;
        
        for(int i=0;i<nums.size();++i){
            
            m[nums[i]]++;
            
            if(m[nums[i]] > max_cnt){
                
                max_cnt = m[nums[i]];
            }
        }
        
        vector<vector<int>> v(max_cnt+1);
        
        for(auto i=m.begin();i!=m.end();++i){
            
            v[i->second].push_back(i->first);
        }
        
        while(k && max_cnt){
            
            if(!v[max_cnt].empty()){
                
                for(int i=0;i<v[max_cnt].size();++i){
                    
                    res.push_back(v[max_cnt][i]);
                    k--;
                    
                }
                
            }
            max_cnt--;
            
        }
        
       return res; 
    }
};