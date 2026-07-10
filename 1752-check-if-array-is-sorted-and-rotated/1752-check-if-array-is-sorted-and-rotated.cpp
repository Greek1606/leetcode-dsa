class Solution {
public:
    bool check(vector<int>& nums) {
        int rot =0;
        for(int i=1;i<nums.size();i++) {
            if(nums[i-1]>nums[i]) rot++;
            
        }
        if(nums[0]<nums[nums.size()-1]) rot++;
        return rot<=1;
        
    }
};