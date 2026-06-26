class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<k) {
            k = k% nums.size();
        }
        vector<int> temp;
        int j=0;
        for(int i =0;i<nums.size()-k;i++) {
            temp.push_back(nums[i]);
        }
        for(int i=nums.size()-k;i<nums.size();i++) {
            nums[j] = nums[i];
            j++;
        }
        for(int i=0;i<temp.size();i++) {
            nums[k+i] = temp[i];
        }
        
    }
};