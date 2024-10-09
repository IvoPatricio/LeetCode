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
    int goodNodes(TreeNode* root) {
        return countGoodNodes(root, root->val);
    }
    int countGoodNodes(TreeNode* node, int maxValue) {
        if (node == nullptr) {
            return 0;
        }
        int count = 0;
        if (node->val >= maxValue) {
            maxValue = node->val;
            count = 1;
        }
        count += countGoodNodes(node->left, maxValue);
        count += countGoodNodes(node->right, maxValue);
        return count;
    }
};