class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        array<int, 26>hash={0};
        array<int, 26>comp={0};
        if(s1.length()>s2.length())
        {
            return false;
        }
        //Created a hashmap for the substring 
        for(int point1 = 0; point1 < s1.length(); point1++)
        {
            hash[s1[point1]-'a']++;
        }

        //Time to compare the hashmap for the substring to the main string
        for(int p2 = 0; p2 < s1.length(); p2++)
        {
            hash[s2[p2]-'a']--;
        }
        if(hash == comp)
        {
            return true;
        }
        for(int p1 = 0, p2=s1.length()-1; p2<s2.length() ; p1++, p2++)
        {
            hash[s2[p2]-'a']++;
            hash[s2[p1]-'a']--;
            if(hash == comp)
            {
                return true;
            }
        }
        return false;
        
    }
};
