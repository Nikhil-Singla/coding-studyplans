#include<vector>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int a = nums.size(); //store nums.size separately
        for(int i=0;i<a;i++) //run it the amount of times needed till it crosses size, ie from start to finish
        {
            nums[i] *= nums[i]; //square each of the nums[i] terms
        }
        sort(nums.begin(),nums.end()); //simple sorting function
        return nums;
    }
};
