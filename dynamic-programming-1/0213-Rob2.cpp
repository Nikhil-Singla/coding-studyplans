// 0213 - House Robber II

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        return max(robLinear(nums, 0, n-2), robLinear(nums, 1, n-1));
    }

    int robLinear(vector<int>& nums, int l, int r) {
        int incl = 0, excl = 0;
        for (int i = l; i <= r; ++i) {
            int new_excl = max(excl, incl);
            incl = excl + nums[i];
            excl = new_excl;
        }
        return max(incl, excl);
    }
};
