class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n % 2 == 0)
            n = n / 2;
        while(n)
        {
            if(n % 4 != 1)
                return false;
            n = n / 4;
        }
        return true;
    }
};