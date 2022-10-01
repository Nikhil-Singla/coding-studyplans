class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        k %= length;
        if(k==0)
        {
            return;
        }
        //Follow the triple reversal concept, reverse the entire thing thrice. 
        //First the biggest array, then the two individual blocks.
        //reverse(nums.begin(),nums.begin()+length-k); //Comment in for alt sol
        //reverse(nums.begin()+length-k, nums.end());
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(),nums.begin()+k); //Comment out for alt sol
        reverse(nums.begin()+k,nums.end()); //Comment out for alt sol
    }

    /*void go_next(vector<int> &nums, int len)
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
    } */

};
