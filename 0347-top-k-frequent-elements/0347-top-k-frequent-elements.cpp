class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        //create map
        for(int num: nums){
            mp[num]++;
        }
        priority_queue<pair<int, int>>p;
        for(auto it: mp){
            p.push({it.second, it.first});
        }
        vector<int>ans;
        while(k--){
            ans.push_back(p.top().second);
            p.pop();
        }

        return ans;


    }
};