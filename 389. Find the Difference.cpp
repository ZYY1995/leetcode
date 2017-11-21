class Solution {
public:
    char findTheDifference(string s, string t) {
        int num_letter[26] = {0};
        for(int i = 0;i < s.size();i++)
        {
            num_letter[s[i] -  97]++;
        }
        for(int i = 0;i<t.size();i++)
        {
            if(num_letter[t[i] - 97] == 0)
            {
                return t[i];
            }
            num_letter[t[i] - 97]--;
        }
    }
};