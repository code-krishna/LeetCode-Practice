class Solution {
    public int maxSubArray(int[] nums) {
        
        int curr_sum=0, max_sum=nums[0];
        
        for(int i: nums){
            
            if(curr_sum < 0)
                curr_sum = 0;
            
            curr_sum += i;
            
            max_sum = curr_sum > max_sum ? curr_sum : max_sum;
            
        }
        
        return max_sum;
    }
}