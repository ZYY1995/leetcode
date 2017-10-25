/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct Result{
    vector<double> value;
    vector<int> count;
};
class Solution {
public:
    Result countOfLevels(TreeNode* root) {
        if (root == NULL)
        {
            Result result;
            return result;
        }
            
        Result result;
        result.count.push_back(1);
        result.value.push_back(root->val);
        
        Result left = countOfLevels(root->left);
        Result right = countOfLevels(root->right);
        int i = 0;
        while(i < left.value.size() || i < right.value.size())
        {
            result.value.push_back((i<left.value.size()?left.value[i]:0) + (i<right.value.size()?right.value[i]:0));
            result.count.push_back((i<left.value.size()?left.count[i]:0) + (i<right.value.size()?right.count[i]:0));
            i++;
        }
        return result;
    }
    
    vector<double> averageOfLevels(TreeNode* root) {
        Result result = countOfLevels(root);
        for(int i = 0;i<result.value.size();i++)
        {
            result.value[i] /= result.count[i];
        }
        return result.value;
    }
};