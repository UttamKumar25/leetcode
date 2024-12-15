class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            int diff=target-nums[i];
            if(mp.find(diff)!=mp.end()){
 //if find return index of that and current numnber index
                return {mp[diff], i };
            }
//if not find, push the element and its index 
            mp[nums[i]]=i;
        }
        return {};
    }
};