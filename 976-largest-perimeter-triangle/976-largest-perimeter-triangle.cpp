class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        int one=0, two=0, three=0, p=0;
        
        sort(nums.begin(), nums.end());
        
        for(int i=nums.size()-1;i>=2;--i){
            
            one = nums[i];
            two = nums[i-1];
            three = nums[i-2];
            
            if(one < two + three && p < one+two+three){
                p = one+two+three;
            }
            
        }
        
        return p;
        
    }
};