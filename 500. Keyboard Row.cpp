class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        for(int i = 0;i<words.size();i++)
        {
            string word = words[i];
            int line1 = 0,line2 = 0,line3 = 0;
            for(int j = 0;j<word.size();j++)
            {
                switch(word[j])
                {
                    //case 'q': ;case 'w': ;case 'e': ;case 'r': ;case 't': ;case 'y': ;case 'u': ;case 'i': ;case 'o': ;case 'p': ;
                    //case 'Q': ;case 'W': ;case 'E': ;case 'R': ;case 'T': ;case 'Y': ;case 'U': ;case 'I': ;case 'O': ;case 'P': ;
                    case 'z': ;case 'x': ;case 'c': ;case 'v': ;case 'b': ;case 'n': ;case 'm': ;
                    case 'Z': ;case 'X': ;case 'C': ;case 'V': ;case 'B': ;case 'N': ;case 'M': ;
                        line3++;
                        break;
                    case 'a': ;case 's': ;case 'd': ;case 'f': ;case 'g': ;case 'h': ;case 'j': ;case 'k': ;case 'l': ;
                    case 'A': ;case 'S': ;case 'D': ;case 'F': ;case 'G': ;case 'H': ;case 'J': ;case 'K': ;case 'L': ;
                        line2++;
                        break;
                    default:
                        line1++;
                        break;
                }
            }
            if (line1 == word.size() || line2 == word.size() || line3 == word.size())
                {
                    result.push_back(word);
                }
        }
        return result;
    }
};