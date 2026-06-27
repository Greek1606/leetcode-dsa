class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()==2) return {0,1};
        int i=0;
        int j= 1;
        while(i<j){
            if(j>=nums.size()-1) {
                if(j==nums.size()-1) {
                    if(nums[i]+nums[j]==target && i!=j) break;
                }
                i++;
                j=i+1;
            }
            if(nums[i]+nums[j]!=target) j++;
            
            if(nums[i]+nums[j]==target && i!=j) break;
        }
        return {i,j};
    }
};