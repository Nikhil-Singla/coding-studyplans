class Solution {
public:

    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size();
        vector<int> minCost;
        minCost.push_back(cost[0]);
        minCost.push_back(cost[1]);
        for(int i = 2; i < cost.size(); i++)
        {
            minCost.push_back(cost[i] + min(minCost[i-1], minCost[i-2]));
        }
        return min(minCost[n-1], minCost[n-2]);
    }
};