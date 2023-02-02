class Solution {
public:

    vector<int> memo;

    int rob(vector<int>& nums) 
    {
        memo.resize(nums.size()+1, -1);
        return helper(nums, nums.size()-1);
    }

    int helper(vector<int>& nums, int index)
    {
        if(index < 0)
        {
            return 0;
        }
        if(memo[index] >= 0)
        {
            return memo[index];
        }
        int Sum = max(nums[index]+helper(nums,index-2), helper(nums,index-1));
        memo[index] = Sum;
        return Sum;
    }
};