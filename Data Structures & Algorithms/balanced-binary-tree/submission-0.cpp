class Solution {
public:
    int solve(TreeNode * root,int &mx){
        if(!root){
            return 0;
        }

        

        int l=solve(root->left,mx);
        int r=solve(root->right,mx);
        


        return 1 +max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }

        int mx=0;

        solve(root,mx);

        if(mx<=1){
            return true;
        }

        return false;


        
        
    }
};
