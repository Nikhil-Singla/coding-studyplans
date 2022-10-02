class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        auto point1=s.begin(), point2=s.begin();
        while(point2<=s.end())
        {
            if((*point2)==(' ')||(*point2)==NULL)
            {
                reverse(point1,point2);
                point1 = point2;
            }
            point2++;
        }
        reverse(s.begin(),s.end()-1);
        
        return s;
    }
};

/*int last=s.length()-1;
        string result;
        result.resize(last+1);
        auto end = s.end(), begin=result.begin();
        end--;
        for(int i=0; i<s.length(); i++)
        {
            *begin++ = *end--;
        }
        return result;*/
