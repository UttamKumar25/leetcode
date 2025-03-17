class Solution {
public:
    bool divideArray(vector<int>& nums) {
        if(nums.size()%2==1){
            return false;
        }
        unordered_map<int, int>mp;
        for(int num: nums){
            mp[num]++;
        }

        for(auto i: mp){
            if(i.second%2!=0){
                return false;
            }
        }
        return true;
    }
};