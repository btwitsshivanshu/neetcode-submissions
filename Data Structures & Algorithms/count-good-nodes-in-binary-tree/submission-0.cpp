class Solution {
public:
    void solve(TreeNode * root,int &count,int mx){
        if(!root) return;

        if(mx<=root->val){
            count++;
        }


        mx=max(mx,root->val);

        


        solve(root->left,count,mx);
        solve(root->right,count,mx);


    }
    int goodNodes(TreeNode* root) {

        if(!root) return 0;

        int mx=INT_MIN;

        int count=0;
        
        solve(root,count,mx);

        return count;
        
    }
};
