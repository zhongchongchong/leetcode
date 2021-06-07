class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();
        vector<int> dp(len+1, INT_MAX);
        dp[0] = dp[1] = 0;
        
        for(int i=2; i<len+1; ++i)
        {
            dp[i] = min(dp[i], dp[i-1] + cost[i-1]);
            dp[i] = min(dp[i], dp[i-2] + cost[i-2]);
        }
        
        return dp[len];
    }
};