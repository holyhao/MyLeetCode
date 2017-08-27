437.Path Sum III
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
    int sumup(TreeNode* root,int pre,int& sum){
        if(root==nullptr) return 0;
        int current =pre+root->val;
        return (current==sum)+sumup(root->left,current,sum)+sumup(root->right,current,sum);
    }
    int pathSum(TreeNode* root, int sum) {
        if(root==nullptr) return 0;
        return sumup(root,0,sum)+pathSum(root->left,sum)+pathSum(root->right,sum);
    }
};