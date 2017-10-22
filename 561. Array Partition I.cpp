class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        vector<int> hashtable(20001,0);
        for(int i = 0;i<nums.size();i++)
        {
            hashtable[nums[i] + 10000]++;
        }
        bool flag = true;
        for(int i = 0;i<20001;)
        {
            if (hashtable[i])
            {
                if (flag)
                {
                    sum += i - 10000;
                    flag = false;
                    
                }
                else
                {
                    flag = true;
                }
                hashtable[i]--;
            }
            else
            {
                i++;
            }
        }
        return sum;
    }
};
/*
存在[1,2,3,2]的情况，因此每次必须hashtable[i]--直到hashtable[i] == 0才能i++
*/