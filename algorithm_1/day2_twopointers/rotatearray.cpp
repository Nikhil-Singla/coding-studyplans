class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a = nums.size(), l=0;
        vector<int> rot(a);
        int flag = 0;
        for(int i=0,j=0; i<a && j<k; i++)
        {
            l = i+k;
            if(l<a)
                {rot[l]=nums[i];}
            else
            {
                if(flag == 0)
                {
                    l=0;
                    rot[l]=nums[i];
                    flag = 1;
                    j++;
                }
                else
                {
                    rot[j]=nums[i];
                    j++;
                }
            }
        }
        nums = rot;
    }
};
