#include <cstring>
class Solution {
public:
    int dp[301][301];
    int solve(int i, int j, vector<int>&nums){

        if(i>j) return 0;

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int mx=INT_MIN;

        for(int num=i;num<=j;num++){
            int cost=nums[i-1]*nums[num]*nums[j+1]  + solve(num+1,j,nums)+ solve(i,num-1,nums);

            mx=max(mx,cost);
        }

        return dp[i][j]=mx;
    }
    int maxCoins(vector<int>& nums) {

        memset(dp,-1,sizeof(dp));
        int n=nums.size();
        nums.push_back(1);
        nums.insert(nums.begin(),1);


        return solve(1,n,nums);
        
    }
};