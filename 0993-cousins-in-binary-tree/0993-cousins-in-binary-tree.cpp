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
    bool isCousins(const TreeNode* root, const int x, const int y) {
   
        queue<pair<const TreeNode*, int>> work;
        int cousin_depth = 0;
        work.push({root, 0});
        while (!work.empty()) {
            const auto& [node, depth] = work.front();
          
            if (node->val == x || node->val == y) {
              
                if (cousin_depth) {
                    return depth == cousin_depth;
                } else {
                    if (!depth) {
                        return false;
                    }
                    cousin_depth = depth;
                }
            }
     
            if (node->left) {
                work.push({node->left, depth + 1});
            }
            if (node->right) {
                work.push({node->right, depth + 1});
            }
            if (node->left && node->right) {
                if (minmax(node->left->val, node->right->val) == minmax(x, y)) {
                    return false;
                }
            }
            if (cousin_depth && depth > cousin_depth) {
                return false;
            }
            work.pop();
       
        }
        return false;
    }
};