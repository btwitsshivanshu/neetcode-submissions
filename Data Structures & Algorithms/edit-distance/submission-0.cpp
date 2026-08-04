#include <cstring>
class Solution {
public:
    int dp[101][101];
    int solve(int i, int j, string &s1, string &s2){

        if(i>=s1.size()){
            return s2.size()-j;
        }

        if(j>=s2.size()){
            return s1.size()-i;
        }


        if(s1[i]==s2[j]){
            dp[i][j]= solve(i+1,j+1,s1,s2);
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }




        int a=1+solve(i+1,j,s1,s2);
        int b=1+solve(i+1,j+1,s1,s2);
        int c=1+solve(i,j+1,s1,s2);

        return dp[i][j]=min({a,b,c});

    }
    int minDistance(string s1, string s2) {

        memset(dp,-1,sizeof(dp));

        return solve(0,0,s1,s2);



        
    }
};
