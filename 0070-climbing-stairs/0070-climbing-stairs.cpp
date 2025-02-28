class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) return 1;

        std::vector<int> ans(n+1);
        ans[0]=1;  // 1 way to climb 0 step; i.e nothing to do, stand on it only
        ans[1]=1;  // 1 way to climb 1 stair

        for (int i = 2; i <= n; i++) {
            ans[i]=(ans[i-1] + ans[i-2]);
        }

        return ans[n];
    }
};