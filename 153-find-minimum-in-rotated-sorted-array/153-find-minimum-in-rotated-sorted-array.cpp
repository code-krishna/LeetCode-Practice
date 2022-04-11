#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int l=0, r=nums.size()-1;
        
        int minm = min(nums[l], nums[r]);
        
        if(nums.size()==2) return minm;
        
        while(l <= r){
            
            int mid = (l+r)/2;
            
            if(mid!=0 && mid!=nums.size()-1){
                
                if(nums[mid] < nums[mid-1] && nums[mid] < nums[mid+1]){
                    minm = min(minm, nums[mid]);
                }
            }
            
            if(nums[mid] >= nums[l] && nums[mid] >= nums[r]){
                l = mid+1;
            }
            
            else{
                r = mid-1;
            }
            
        }
        return minm;
    }
};