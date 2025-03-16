class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum=0;
        int maxsum=INT_MIN;

        for(int num: nums){
            cursum=max(num, cursum+num);
            maxsum=max(maxsum,cursum);
        }

        return maxsum;
    }
};