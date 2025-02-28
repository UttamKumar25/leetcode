class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        //2 case : SORT IT
        //(1) either last 3 eleemnet product
        //(2) or --> first 2 most negative and LAST most positive 
        //MAX OF THESE 2 CASE GIVE MAX product
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int a=nums[n-1]*nums[n-2]*nums[n-3];
        int b=nums[0]*nums[1]*nums[n-1];
        return  max(a,b);
    }
};