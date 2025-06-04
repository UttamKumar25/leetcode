class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        unordered_map<int, int> trustedBy;
    unordered_map<int, int> trusts;

    for (auto& t : trust) {
        trusts[t[0]]++;       // person t[0] trusts someone
        trustedBy[t[1]]++;    // person t[1] is trusted
    }

    for (int i = 1; i <= n; ++i) {
        if (trustedBy[i] == n - 1 && trusts[i] == 0)
            return i;
    }

    return -1;
    }
};