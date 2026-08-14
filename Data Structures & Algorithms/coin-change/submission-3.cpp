#include <cstring>
class Solution {
public:
    int dp[11][10001];

    int solve(int i, vector<int>&coins,int amount){
        if(amount==0){
            return 0;

        }
        if(i==coins.size()){
            return 1e9;
        }


        if(dp[i][amount]!=-1){
            return dp[i][amount];
        }

        

        

        if(coins[i]>amount){
            return dp[i][amount]=solve(i+1,coins,amount);
            
        }

        int take=1+solve(i,coins,amount-coins[i]);
        int skip=solve(i+1,coins,amount);

        return dp[i][amount]=min(take,skip);
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));

        return solve(0,coins,amount)==1e9?-1:solve(0,coins,amount);
        
    }
};
