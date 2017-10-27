class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int length = 0;
        int temp_length = 0;
        for(int i = 0;i<nums.size();i++)
        {
            temp_length = nums[i] == 1?temp_length + 1:0;
            length = max(length,temp_length);
        }
        return length;
    }
};