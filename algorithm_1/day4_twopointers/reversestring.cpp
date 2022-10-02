class Solution {
public:
    void reverseString(vector<char>& s) {
        //reverse(s.begin(),s.end());
        int i = s.size(), last=s.size()-1;
        if(i%2==0)
        {
            i /= 2;
        }
        else
        {
            --i /=2;
        }
        for(int j=0; j<i; j++)
        {
            swap(s[j],s[last--]);
        }
    }
};
