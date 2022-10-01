#include<vector>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int a = nums.size();
        for(int i=0;i<a;i++)
        {
            nums[i] *= nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
