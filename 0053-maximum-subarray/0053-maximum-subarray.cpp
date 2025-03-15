class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Cur_sum = 0, maxsum=INT_MIN;
        for(int num:nums){
            Cur_sum=max(num, Cur_sum+num);
            maxsum=max(maxsum,Cur_sum);
        }
        return maxsum; 
    }
};