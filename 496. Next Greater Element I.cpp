class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s_nums;
        unordered_map<int,int> greater_map;
        for(int j = 0;j<nums.size();j++)
        {
            while(s_nums.size() && s_nums.top() < nums[j])
            {
                greater_map[s_nums.top()] = nums[j];
                s_nums.pop();
            }
            s_nums.push(nums[j]);
        }
        vector<int> result(findNums.size(),-1);
        for(int i = 0;i<findNums.size();i++)
        {
            result[i] = greater_map.count(findNums[i])?greater_map[findNums[i]]:-1;
        }
        return result;
    }
};

/*
用stack堆栈保存还没有找到更大的值的所有元素
只需要从顶部开始即可，如果找到更大的元素，就马上弹出，并把元素值和更大的元素值存放在map中
遍历一边map中存放了所有有更大元素的元素

遍历一边即可找到更大元素值。

为啥只需要看顶部呢

因为堆栈保存时，每一个元素一定比之前的元素小或者相等，
不然之前的元素就可以弹出了，再和之之前的元素对比，直到堆栈里面所有
元素是有序的，最顶端一定是堆里最小的元素，因此来了一个新的元素就可以和top比较，
继续之前的活动，弹出找到的元素，把新元素push进来

最后map中存放的就是所有找到了的对
*/