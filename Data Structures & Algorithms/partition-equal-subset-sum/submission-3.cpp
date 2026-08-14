#include <cstring>
class Solution {
public:
    int dp[101][10001];
    bool solve(int i, vector<int>&nums,int target){
        if(target==0){
            return true;
        }

        if(i>=nums.size()){
            return false;
        }

        if(dp[i][target]!=-1){
            return dp[i][target];
        }

        if(target<nums[i]){
            return solve(i+1,nums,target);
        }

        int take=solve(i+1,nums,target-nums[i]);
        int skip=solve(i+1,nums,target);

        return dp[i][target]=take||skip;
    }
    bool canPartition(vector<int>& nums) {

        int n=nums.size();

        if(!n){
            return false;
        }

        memset(dp,-1,sizeof(dp));

        int sum=accumulate(nums.begin(),nums.end(),0);

        if((sum)%2!=0){
            return false;
        }

        return solve(0,nums,sum/2);
        
    }
};
