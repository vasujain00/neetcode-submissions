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
vector<int> sortedTree;
    int kthSmallest(TreeNode* root, int k) {
        // in-order traversal 
       // left -> root -> right
       dfs(root);

       return sortedTree[k-1];
    }

    void dfs(TreeNode* root) {
        if(root->left!= NULL) dfs(root->left);
        sortedTree.push_back(root->val);
        if(root->right!=NULL) dfs(root->right);


    }
};
