102.Binary Tree Level Order Traversal
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        vector<int> path;
        vector<TreeNode*> vec;
        int cur=0,last=1;
        vec.push_back(root);
        while(cur<vec.size()){
            last=vec.size();
            while(cur<last){
                path.push_back(vec[cur]->val);
                if(vec[cur]->left!=nullptr) vec.push_back(vec[cur]->left);
                if(vec[cur]->right!=nullptr) vec.push_back(vec[cur]->right);
                cur++;
            }
            res.push_back(path);
            path.clear();
        }
        return res;
		
		
    }
};