class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, INT_MAX); // 1. Initialize the DP array with INT_MAX
        dp[0] = 0;                          // 2. Base case: 0 coins to make 0 amount

for (int coin : coins) {            // 3. Iterate over each coin
    for (int j = coin; j <= amount; j++) {  // 4. Update dp array for every possible amount
        if (dp[j - coin] != INT_MAX) {      // 5. Check if the subproblem is reachable
            dp[j] = min(dp[j], dp[j - coin] + 1); // 6. Take or not take this coin
        }
    }
}

return dp[amount] == INT_MAX ? -1 : dp[amount]; // 7. Return the result or -1 if unreachable

    }
};