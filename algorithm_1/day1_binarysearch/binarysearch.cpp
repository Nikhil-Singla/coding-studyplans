class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = 0;
        mid = (start+end)/2;
        while(start<=end)
        {
            if(nums.at(mid) == target)
                return mid;
            if(nums.at(mid) < target)
            {
                start = mid;
            }
            if(nums.at(mid) > target)
            {
                end = mid;
            }
            mid = ((start++)+end)/2;
        }
        return (-1);
    }
};
