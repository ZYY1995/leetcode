class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> a;
        for(int i = 0;i < nums.size();i++)
        {
            a[nums[i]] += 1;
            if (a[nums[i]] > 1)
            {
                a.erase(nums[i]);
            }
        }
        return a.begin()->first;
    }
};