class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans(arr.begin(), arr.end());

        sort(ans.begin(),ans.end());


        unordered_map<int,int>mp;
        int rank=1;
        for(int num: ans){
           if (mp.find(num) == mp.end()) { // If the number doesn't already have a rank
            mp[num] = rank;
            rank++;
        }
        }

        // Replace elements in the original array with their ranks
    for (int& num : arr) {
        num = mp[num];
    }
return arr;
    }

    
};