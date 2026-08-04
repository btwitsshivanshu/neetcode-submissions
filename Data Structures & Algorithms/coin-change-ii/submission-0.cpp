class Solution {
public:
    int solve(int i, int amount, vector<int>&coins){
        

        if(i>=coins.size() && amount>0){
            return 0;
        }

        if(amount<0){
            return 0;
        }

        if(amount==0){
            return 1;
        }

        
        int  take = solve(i,amount-coins[i],coins);
        int skip=solve(i+1,amount,coins);

        return take+skip;
    }
    int change(int amount, vector<int>& coins) {

        return solve(0,amount,coins);
        
    }
};
