class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int largest = INT_MIN;
        int max_diff = -1;

        for (int i = nums.size() - 1; i >= 0; i--) {
            largest = max(largest, nums[i]);
            max_diff = max(max_diff, largest - nums[i]);
        }

        return (max_diff==0)?-1: max_diff;
    }
};