/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        // root is null

        if(!root)
        {
            return false;
        }
    // both nodes are null

    if(!root->left && !root->right)
      return targetSum== root->val;

     targetSum -= root->val;

        // root left is null or right is null
      
      return (hasPathSum(root->left,targetSum) || hasPathSum(root->right,targetSum));
        
        
    }
};