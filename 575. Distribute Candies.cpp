class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int num_kinds = 0;
        int hashtable[200001] = {0};
        for(int i = 0;i < candies.size();i++)
        {
            num_kinds += hashtable[candies[i] + 100000] == 0;
            hashtable[candies[i] + 100000]++;
        }
        if(num_kinds > candies.size() / 2)
        {
            return candies.size() / 2;
        }
        else
        {
            return num_kinds;
        }
    }
};

/*
给姐姐尽可能多的种类，要么全部种类都给了他，要么给她的全是不同种类
*/