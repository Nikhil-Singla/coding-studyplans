class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = 0;
        while(start<=end)
        {
            mid = (start+end)/2;
            if(nums.at(mid) == target)
                return mid;
            if(nums.at(mid) < target)
            {
                start = mid+1;
            }
            if(nums.at(mid) > target)
            {
                end = mid-1;
            }
        }
        return (-1);
    }
};
