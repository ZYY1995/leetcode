class Solution {
public:
    int countBinarySubstrings(string s) {
        int pre_start = 0;
        int now_start = 0;
        int result = 0;
        for(int i = 1;i<s.size();i++)
        {
            if (s[i] != s[i-1])
            {
                result += min(now_start - pre_start,i - now_start);
                pre_start = now_start;
                now_start = i;
            }
            
        }
        result += min(now_start - pre_start,(int)s.size() - now_start);
        return result;
    }
};