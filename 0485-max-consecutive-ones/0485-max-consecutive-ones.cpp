class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes =0;
        int cnt = 0;
        for(int i =0;i<nums.size();i++) {
            if(nums[i]==1) cnt++;
            
            if(nums[i]==0) cnt =0;
            maxOnes = max(maxOnes,cnt);
        }
        return maxOnes;
        
    }
};