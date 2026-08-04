#include <cstring>
class Solution {
public:
    int dp[201][201];
    int solve(int i, int j,int prev,vector<vector<int>>& matrix){

        int n=matrix.size();
        int m=matrix[0].size();

        if(i<0 || i>=n || j<0 ||j>=m || matrix[i][j]<=prev){
            return 0;
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        prev=matrix[i][j];

        int up=solve(i-1,j,prev,matrix);
        int left=solve(i,j-1,prev,matrix);
        int down=solve(i+1,j,prev,matrix);
        int right=solve(i,j+1,prev,matrix);


        return dp[i][j]=1+max({down,right,up,left});




    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {

        memset(dp,-1,sizeof(dp));

        int n=matrix.size();
        int m=matrix[0].size();

        int mx=INT_MIN;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mx=max(mx,solve(i,j,-1,matrix));

            }
        }

        return mx;
        
    }
};