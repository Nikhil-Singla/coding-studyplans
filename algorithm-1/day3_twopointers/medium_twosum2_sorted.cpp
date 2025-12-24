class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int last = numbers.size()-1;
        int test=0;
        int i = 0;
        while(i<numbers.size())
        {
            test = numbers[i]+numbers[last];
            if(test == target)
            {
                break;
            }
            if(test<target)
            {i++;}
            if(test>target)
            {last--;}
        }
        return {i+1,last+1};
    }
};
