class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> res;
        
        int left[nums.size()], right[nums.size()];
        
        int tmp = 1;
        
        for(int i=0;i<nums.size();++i){
           
           if(i==0){
               res.push_back(1);
               tmp *= nums[i];
           }
           else{
               res.push_back(tmp);
               tmp *= nums[i];
           }
       }
       
       tmp = 1;
        
       for(int i=nums.size()-1;i>=0;--i){
           
           if(i==nums.size()-1){
               tmp *= nums[i];
           }
           else{
               res[i] *= tmp;
               tmp *= nums[i];
           }
       } 
    
       return res;
    
    }
};