#include <cstring>
class Solution {
public:
    int dp[1001];
    int solve(int i, vector<int>&nums){

        if(i>=nums.size()-1){
            return 0;
        }

        if(dp[i]!=-1){
            return dp[i];
        }


        // int take=0;
        int mn=INT_MAX;

        for(int j=1;j<=nums[i];j++){

            int jumps = solve(i + j, nums);

            if(jumps != INT_MAX)
                mn = min(mn, 1 + jumps);
        }

        return dp[i]=mn;

    }
    int jump(vector<int>& nums) {

        memset(dp,-1,sizeof(dp));

        return solve(0,nums);
        
    }
};
