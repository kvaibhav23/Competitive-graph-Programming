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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> nodes;
        stack<TreeNode*> s1, s2;
        
        if (root)
            s1.push(root);
        
        while (!s1.empty()) {
            TreeNode* curr = s1.top();
            s1.pop();
            s2.push(curr);
            
            if (curr->left)
                s1.push(curr->left);
            if (curr->right)
                s1.push(curr->right);
        }
        
        while (!s2.empty()) {
            nodes.push_back(s2.top()->val);
            s2.pop();
        }
        
        return nodes;
    }
};