class Solution {
public:
    int findComplement(int num) {
        int max = 0;
        for(int i = 0;i < 32;i++)
        {
            if (num <= max)
            {
                return max - num;                
            }
            max = (max + 1) * 2 - 1;
        }
    }
};