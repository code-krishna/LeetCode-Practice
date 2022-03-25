class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> result;
        
        int left = 0, right = nums.size()-1;
        
        while(right >= left){
            
            int r = nums[right]*nums[right];
            int l = nums[left]*nums[left];
            if( r > l){
                result.push_back(r); right--;
            }
            else{
                result.push_back(l); left++;
            }
        }
        
        for(int i=0;i<result.size();++i){
            nums[nums.size()-i-1] = result[i];
        }
        
        return nums;
    }
};