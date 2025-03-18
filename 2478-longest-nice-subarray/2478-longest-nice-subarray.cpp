class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size(); 
        int mask = 0, l = 0, sol = 0;
        for(int i = 0; i < n; i++) {
            while(mask & nums[i]) mask= mask-nums[l++];
            mask |= nums[i];
            sol = max(sol, i - l + 1);
        }
        return sol;
    }
};