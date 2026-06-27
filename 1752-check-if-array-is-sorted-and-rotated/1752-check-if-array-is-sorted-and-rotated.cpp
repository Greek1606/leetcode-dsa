#include<bits/stdc++.h>
class Solution {
public:
    bool check(vector<int>& nums) {
        int j=1;
        while(j<nums.size()){
            if(nums[j-1]<=nums[j]) {
                j++;
                continue;
            };
            reverse(nums.begin(),nums.begin()+j);
            reverse(nums.begin()+j,nums.end());
            reverse(nums.begin(),nums.end());
            break;
        }
        if(nums.size()<=j) j %=nums.size();
        if(!is_sorted(nums.begin(),nums.end())) return false;
        return true;
        

        
    }
};