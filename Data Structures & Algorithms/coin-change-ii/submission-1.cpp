class Solution {
public:
    // int solve(int i, int amount, vector<int>&coins){
        

    //     if(i>=coins.size() && amount>0){
    //         return 0;
    //     }

    //     if(amount<0){
    //         return 0;
    //     }

    //     if(amount==0){
    //         return 1;
    //     }

        
    //     int  take = solve(i,amount-coins[i],coins);
    //     int skip=solve(i+1,amount,coins);

    //     return take+skip;
    // }
    int change(int amount, vector<int>& coins) {

        int n=coins.size();

        vector<vector<int>>dp(n+1,vector<int>(amount+1,0));

        for(int i=0;i<=amount;i++){
            if(i>0){
                dp[n][i]=0;
            }
            else if(i==0){
                dp[n][i]=1;
            }
        }

        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=amount;j++){

                if(j<0){
                    dp[i][j]= 0;
                }

                else{
                    int take=0;


                     if(j >= coins[i]){take = dp[i][j-coins[i]];}
                    int skip=  dp[i+1][j];

                    dp[i][j]=take+skip;

                }



            }
        }

        return dp[0][amount];
        
    }
};
