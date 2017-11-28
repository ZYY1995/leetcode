class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int count[nums.size() + 1] = {0};
        vector<int> result;
        for(int i = 0;i<nums.size();i++)
        {
            count[nums[i]]++;
            if(count[nums[i]] > 1)  result.push_back(nums[i]);
        }
        return result;
    }
};