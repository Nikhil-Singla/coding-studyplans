#include <algorithm>
#include <stdlib.h>
class Solution {
public:
    void go_next(vector<int> &nums, int len)
    {
        auto first = nums.begin();
        auto last = nums.end();
        int k = len, i=0;
        while(k-- > 0)
        {
            std::swap(nums[i],nums[len-1]);
            i++;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        if(length<2)
        {}
        else
        {
            for(int i=0; i<k; i++)
            {
                length = nums.size();
                go_next(nums, length);
            }
        }
    } 
};
