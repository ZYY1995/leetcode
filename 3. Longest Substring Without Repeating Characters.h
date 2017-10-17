#include<map>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start_index = 0;
        int pre_index = 0;
        int length = 0;
        int pre_length = 0;
        std::map<char,int> character_num;
        for(int i = 0;i < s.size();i++)
        {
            if(character_num.find(s[i]) != character_num.end() && character_num[s[i]] >= start_index)
            {
                if(length > pre_length)
                {
                    pre_index = start_index;
                    pre_length = length;
                }
                start_index = character_num[s[i]] + 1;
                length = i - start_index + 1;
                character_num[s[i]] = i;
            }
            else
            {
                character_num[s[i]] = i;
                length ++;
            }
        }
        if(length > pre_length)
        {
            return length;
        }
        return pre_length;
    }
};

/* idea:
例abcabcbb
寻找方法：需要一个start_index保存开始位置，一个length保存长度信息（还需要pre_来保存最大长度的index和length）
然后用map来存储每次遇到字母最近一次的位置，即遇到一个新的字母就新建一个key，否则就更新值value；语句character_num[s[i]] = i;
如果map中存在这个key，并且这个key的value即最近遇到这个字母的初始位置比start_index大，说明遇到重复，需要更新start_index,length

时间复杂度O(n)

*/