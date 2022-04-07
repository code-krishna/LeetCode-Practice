class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>::iterator lower, upper;
        lower = lower_bound(nums.begin(), nums.end(), target);
        upper = upper_bound(nums.begin(), nums.end(), target);
        
        if(lower==nums.end() || *lower!=target) return {-1,-1};
        
        vector<int> res;
        res.push_back(lower-nums.begin());
        res.push_back(upper-nums.begin()-1);
        
        return res;
    }
};