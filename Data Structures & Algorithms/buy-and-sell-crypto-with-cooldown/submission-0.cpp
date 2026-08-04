#include <cstring>
class Solution {
public:
    int dp[5001][2];
    int solve(int i,vector<int>&prices,bool flag){
        if(i>=prices.size()){
            return 0;
        }

        if(dp[i][flag]!=-1){
            return dp[i][flag];
        }

        int take=0;
        int skip=0;
        int sell=0;

        if(!flag) {
            take=-prices[i]+solve(i+1,prices,true);
            skip=solve(i+1,prices,false);
        }

        if(flag){
            sell=prices[i]+solve(i+2,prices,false);
            skip=solve(i+1,prices,true);
        }

        return dp[i][flag]=max({take,skip,sell});
    }
    int maxProfit(vector<int>& prices) {

        memset(dp,-1,sizeof(dp));

        return solve(0,prices,false);
        
    }
};
