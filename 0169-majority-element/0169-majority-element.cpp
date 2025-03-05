class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int len = nums.size();
    int maj_len = len / 2;
    int ans;
    unordered_map<int, int> mp;
    
    // First pass: Count occurrences
    for (int n : nums) {
        mp[n]++;
    }
    
    // Second pass: Collect numbers appearing more than len/3 times
    for (auto it : mp) {
        if (it.second > maj_len) {
            ans= it.first;
            break;
        }
    }
    return ans;

        /*int cd, count=0;
        for(int i=0; i<nums.size(); i++){
            if(count==0){
                count=1;
                cd=nums[i];
            }
            else{
                if(cd==nums[i])
                count++;
                else
                count--;
            }
            
        }
        count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==cd)
            count++;
        }

        if(count>nums.size()/2)
        return cd;
        else
        return -1;*/
    }
};