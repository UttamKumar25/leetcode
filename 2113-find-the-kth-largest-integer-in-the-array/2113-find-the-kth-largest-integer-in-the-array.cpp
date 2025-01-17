class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        // Sort the numbers based on their value as strings
        sort(nums.begin(), nums.end(), [](const string& a, const string& b) {
            if (a.size() == b.size()) {
                return a < b; // Lexicographical comparison for equal-length numbers
            }
            return a.size() < b.size(); // Shorter number comes first
        });

        // Return the k-th largest, which is the (n-k)-th smallest in 0-based index
        return nums[nums.size() - k];
    }


};