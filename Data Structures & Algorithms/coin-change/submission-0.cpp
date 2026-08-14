class Solution {
public:
    int solve(int i, vector<int>&coins,int amount){
        if(amount==0){
            return 0;

        }
        if(i==coins.size()){
            return 1e9;
        }

        

        

        if(coins[i]>amount){
            return solve(i+1,coins,amount);
            
        }

        int take=1+solve(i,coins,amount-coins[i]);
        int skip=solve(i+1,coins,amount);

        return min(take,skip);
    }
    int coinChange(vector<int>& coins, int amount) {

        return solve(0,coins,amount)==1e9?-1:solve(0,coins,amount);
        
    }
};
