class Solution {
public:
    void solve(TreeNode * l, TreeNode *r){

        if(!l||!r) return;

        swap(l->val,r->val);

        solve(l->left,r->right);
        solve(l->right,r->left);


    }
    TreeNode* invertTree(TreeNode* root) {

        if(!root) return nullptr;

        if(!root->left || !root->right) return root;

        solve(root->left,root->right);

        return root;
        
    }
};
