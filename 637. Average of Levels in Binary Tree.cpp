/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<double> result;
        q.push(root);
        while(!q.empty())
        {
            double tmp = 0;
            int n_size = q.size();
            for(int i = 0;i < n_size;i++)
            {
                TreeNode* t = q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                tmp += t->val;
            }
            result.push_back(tmp / n_size);
        }
        return result;
    }
};