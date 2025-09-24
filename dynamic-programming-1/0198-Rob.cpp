// 0198 - House Robber

class Solution {
public:
    int rob(vector<int>& nums) {
        int incl = 0, excl = 0;
        for (int n : nums) {
            int new_excl = max(excl, incl);
            incl = excl + n;
            excl = new_excl;
        }
        return max(incl, excl);
    }
};
