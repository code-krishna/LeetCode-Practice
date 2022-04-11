#include<bits/stdc++.h>
using namespace std;    

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        unordered_map<int,int> m;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();++i)
        {
            m[nums[i]] = i;
        }
        
        vector<vector<int>> result;
        
        for(int i=0;i<nums.size();++i)
        { 
            if(i>0)
            {
                if(nums[i] == nums[i-1])
                    continue;
            }
            for(int j=i+1;j<nums.size();++j)
            {
                int init_sum = nums[i]+nums[j];
                int target = 0 - init_sum;
                if(m.find(target)!=m.end())
                {
                    if(m[target]!=i && m[target]!=j && m[target] > j)
                    {
                        vector<int> init_result;
                        init_result = {nums[i], nums[j], target};
                        result.push_back(init_result);
                    }
                }
                while(j<nums.size()-1 && nums[j] == nums[j+1]){
                    j++;
                }
            }
            
            while(i<nums.size()-1 && nums[i] == nums[i+1]){
                i++;
            }
        }
        
        return result;
    }
};