class Solution {
public:

    vector<int> memo;

    int deleteAndEarn(vector<int>& nums) 
    {
        vector<int> house;
        house.resize(10001, 0);
        for(int i = 0; i < nums.size(); i++)
        {
            house[nums[i]] += nums[i];
        }
        int first = 0, second = 0, curr = 0;
        for(auto c : house)
        {
            curr = max(first, second + c);
            second = first;
            first = curr;
        }
        return curr;
    }
};

// TIME LIMIT EXCEEDED
/*class Solution {
public:

    vector<int> memo;

    int deleteAndEarn(vector<int>& nums) 
    {
        vector<int> house;
        house.resize(10001, 0);
        for(int i = 0; i < nums.size(); i++)
        {
            house[nums[i]] += nums[i];
        }
        memo.resize(10001, -1);
        int sum = helper(house, house.size()-1);
        return sum;
    }

    int helper(vector<int> nums, int index)
    {
        if(index < 0)
        {return 0;}
        if(memo[index] > 0)
        {return memo[index];}
        int deleted = max(nums[index] + helper(nums, index-2), helper(nums, index-1));
        memo[index] = deleted;
        return deleted;
    }
};*/