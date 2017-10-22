class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int num_kinds = 0;
        bool hashtable[200001] = {false};
        for(int i = 0;i < candies.size();i++)
        {
            num_kinds += hashtable[candies[i] + 100000] == false;
            hashtable[candies[i] + 100000] = true;
        }
        return min((int)candies.size() / 2,num_kinds);
    }
};

/*
给姐姐尽可能多的种类，要么全部种类都给了他，要么给她的全是不同种类
*/