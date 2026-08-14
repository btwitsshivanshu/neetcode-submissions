#include <cstring>
class Solution {
public:

    int dp[46];
    int solve(int i, int n){
        if(i>=n){
            return 1;
        }

        if(dp[i]!=-1){
            return dp[i];
        }

        int take_one=solve(i+1,n);
        int take_two=solve(i+2,n);

        return dp[i]=take_one +take_two;
    }
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(1,n);
        
    }
};
