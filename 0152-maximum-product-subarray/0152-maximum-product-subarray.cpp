class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;

        int maxp=nums[0], minp=nums[0], res=nums[0];

        for(int i=1; i<n; i++){
            if(nums[i]<0) swap(minp, maxp);

            minp=min(nums[i], nums[i]*minp);
            maxp=max(nums[i], nums[i]*maxp);

            res=max(maxp, res);

        }

        return res;
    }
};