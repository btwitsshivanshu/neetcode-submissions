class Solution {
public:
    int solve(TreeNode * root, int &maxdia){
        if(!root){
            return 0;
        }

        int l=solve(root->left,maxdia);
        int r=solve(root->right,maxdia);

        maxdia=max(maxdia,l+r);

        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {

        if(!root) return 0;

        int maxdia=0;

        solve(root,maxdia);
        return maxdia;
        
    }
};
