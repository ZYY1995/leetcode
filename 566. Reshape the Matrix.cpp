class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        if(nums.size() * nums[0].size() != r * c)
            return nums;
        vector<int> row(c,0);
        vector<vector<int>> result(r,row);
        int index = 0;
        for(int i = 0;i<nums.size();i++)
        {
            for(int j = 0;j<nums[i].size();j++)
            {
                result[index/c][index%c] = nums[i][j];
                index++;
            }
        }
        return result;
    }
};