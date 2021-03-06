class Solution {
public:
    
    void reverse(vector<int>& nums, int l, int r){
        
        while(l<r){
            
            int tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
            l++; r--;
        }
        
    }
    
    void rotate(vector<int>& nums, int k) {
        
        reverse(nums, 0, nums.size()-1);
        
        k%=(nums.size());
        
        reverse(nums, 0, k-1);
        
        reverse(nums, k, nums.size()-1);
    }
};