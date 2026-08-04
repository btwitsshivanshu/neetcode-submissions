#include<cstring>
class Solution {
public:
    int dp[101][101];
    bool solve(int i, int j, string &s1, string &s2,string &s3){


        int k=i+j;

        if(k>=s3.size()){
            return true;
        }

        if(i>=s1.size() && j>=s2.size()){
            return false;
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int take_s1=0;
        int take_s2=0;
        if(s1[i]==s3[k]){
            take_s1=solve(i+1,j,s1,s2,s3);

        }

        if(s2[j]==s3[k]){
            take_s2=solve(i,j+1,s1,s2,s3);
        }

        return dp[i][j]=take_s1||take_s2;
    }
    bool isInterleave(string s1, string s2, string s3) {
        memset(dp,-1,sizeof(dp));

        return solve(0,0,s1,s2,s3);
        
    }
};
