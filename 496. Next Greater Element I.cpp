class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> result(findNums.size(),-1);
        for(int i = 0;i<findNums.size();i++)
        {
            bool findnumber = false;
            for(int j = 0;j<nums.size();j++)
            {
                if(nums[j] == findNums[i])
                {
                    findnumber = true;
                }
                if(nums[j] > findNums[i] && findnumber == true)
                {
                    result[i] = nums[j];
                    break;
                }
            }
        }
        return result;
    }
};