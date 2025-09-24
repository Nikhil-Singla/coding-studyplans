// 0740 - Delete and Earn

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> house(10001, 0);
        for (int v : nums) house[v] += v;
        int first = 0, second = 0, curr = 0;
        for (auto c : house) {
            curr = max(first, second + c);
            second = first;
            first = curr;
        }
        return curr;
    }
};
