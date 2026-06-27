#include<bits/stdc++.h>
class Solution {
public:
    bool check(vector<int>& nums) {
        int k =0;
        // int i=0;
        for(int j=1;j<nums.size();j++) {
            if(nums[j-1]<=nums[j]) continue;
            k=j;
            break;
        }
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.end());
        if(!is_sorted(nums.begin(),nums.end())) return false;
        if(nums.size()<=k) k %=nums.size();
        return true;

        
    }
};