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

  void inorder(TreeNode* root,vector<int>&n)
  {
    if(!root)
    {
        return;
    }
    inorder(root->left,n);
    n.push_back(root->val);
    inorder(root->right,n);
  }
  int diffrence(vector<int>&n)
  {
    int ans=INT_MAX;
    for(int i=0;i<n.size()-1;i++)
    {
        ans= min(ans,abs(n[i] - n[i+1]));
    }
    return ans;
  }


    int minDiffInBST(TreeNode* root) {
         vector<int>n;
        inorder(root,n);
        return diffrence(n);
       
        
    }
};