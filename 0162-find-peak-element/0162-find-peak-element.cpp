class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        
        // If there's only one element, return it as peak
        if (n == 1) return 0;
        
        // Check if the first or last element is a peak
        if (nums[0] > nums[1]) return 0;
        if (nums[n-1] > nums[n-2]) return n-1;
        
        // Check for peaks in the middle
        for (int i = 1; i < n-1; i++) {
            if (nums[i] > nums[i-1] && nums[i] > nums[i+1]) {
                return i;
            }
        }

        return -1; // Should never reach here
    }
};
