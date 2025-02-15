class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int ct=0;
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                ct++;
                maxi=max(ct, maxi);
            }else{
                ct=0;
            }
        }

        return maxi;
    
    }
};