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
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        
        // balanced = abs value of height of left - height of right <= 1;

        int heightOfLeft = getHeight(root->left);
        int heightOfRight = getHeight(root->right);

        return abs(heightOfLeft - heightOfRight) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }


    int getHeight(TreeNode* root)
    {
        if(root == NULL) return 0;

        return max(getHeight(root->left), getHeight(root->right)) +1;
    }
};
