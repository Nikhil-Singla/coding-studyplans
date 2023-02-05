class Solution {
public:
    
    vector<int> memo;
    
    int rob(vector<int>& nums) 
    {
        if(nums.size() < 2)
        {
            return nums[0];
        }
        memo.resize(nums.size(), -1);
        int ans = helper(nums, nums.size()-1, 1);
        memo.clear();
        memo.resize(nums.size(), -1);
        int res = helper(nums, nums.size()-2, 0);
        return max(res, ans);
    }

    int helper(vector<int> nums, int index, int lowest)
    {
        if(index < lowest)
        {
            return 0;
        }
        if(memo[index] >= 0)
        {
            return memo[index];
        }
        int robbed = max(nums[index]+helper(nums, index-2, lowest), helper(nums, index-1, lowest));
        memo[index] = robbed;
        return robbed;
    }

};