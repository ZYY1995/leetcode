class Solution {
public:
    int hammingDistance(int x, int y) {
        if (x < y)
        {
            int tmp = y;
            y = x;
            x = tmp;
        }
        int h_distance = 0;
        while(x != 0)
        {
            h_distance += (x % 2) ^ (y % 2);
            x = x / 2;
            y = y / 2;
        }
        return h_distance;
    }
};