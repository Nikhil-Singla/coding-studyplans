class Solution {
public:

    int climbStairs(int n) 
    {
        vector<int> result;
        result.push_back(1);
        result.push_back(2);
        result.resize(n+1);
        for(int i = 2; i < n; i++)
        {
            result[i] = result[i-1] + result[i-2];
        }
        return result[n-1];
    }
};