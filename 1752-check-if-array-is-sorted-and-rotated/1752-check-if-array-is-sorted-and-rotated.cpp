class Solution {
public:
    bool rotate(vector<int>& nums,int k) {
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++) {
            if(nums[i-1]>nums[i]) return false;
        }
        return true;


    }
    bool check(vector<int>& nums) {
        int rot =0;
        for(int i=1;i<nums.size();i++) {
            if(nums[i-1]>nums[i]) {
                rot = nums.size()-i;
                break;
            }
        }
        if(rot==0) return true;
        // if(rot>nums.size()) rot %=nums.size();
        return rotate(nums,rot);
        
    }
};