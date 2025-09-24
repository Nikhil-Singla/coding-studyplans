// 0746 - Min Cost Climbing Stairs

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int a = 0, b = 0;
        for (int i = 2; i <= n; ++i) {
            int take = cost[i-1] + b;
            int skip = cost[i-2] + a;
            int curr = min(take, skip);
            a = b; b = curr;
        }
        return b;
    }
};
