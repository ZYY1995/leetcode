class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        unordered_map<char, int> value = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
        int pre_value = 0;
        for(int i = s.size()-1;i>=0;i--)
        {
            if(value[s[i]] >= pre_value)
                result += value[s[i]];
            else
                result -= value[s[i]];
            pre_value = value[s[i]];
        }
        return result;
    }
};