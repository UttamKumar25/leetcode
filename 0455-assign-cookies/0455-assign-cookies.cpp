class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int m = g.size(), n = s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        // serve the smaller greed factor first
        int result = 0;
        int l=0, r=0;
        while(l<m && r<n){
            if(g[l]<=s[r]){
                result++;
                l++;
            }//not satisfied check other cookies
            r++;
        }
        return result;
    }
};