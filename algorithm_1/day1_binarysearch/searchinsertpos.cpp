class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int low = 0, high = nums.size()-1;
        int mid=0;
        for(mid = (low+high)/2; low<=high; mid = (low+high)/2)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            (nums[mid]>target ? high=mid-1:low=mid+1);
        }
        return mid;
    }
};
