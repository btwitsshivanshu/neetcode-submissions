class Solution {
public:
    
    int solve(int i, int end,vector<int>&nums,vector<int>&dp){
        if(i>end){
            return 0;
        }

        if(dp[i]!=-1){
            return dp[i];
        }

        int take=nums[i]+solve(i+2,end,nums,dp);
        int skip=solve(i+1,end,nums,dp);

        return dp[i]=max(take,skip);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return 0;

        }

        vector<int>dp(n+1,-1);

        int first=solve(0,nums.size()-2,nums,dp);
        fill(dp.begin(), dp.end(), -1);
        int second=solve(1,nums.size()-1,nums,dp);



        return max(first,second);

        
    }
};
