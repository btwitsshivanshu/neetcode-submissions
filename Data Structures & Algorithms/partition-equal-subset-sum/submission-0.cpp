class Solution {
public:
    bool solve(int i, vector<int>&nums,int target){
        if(target==0){
            return true;
        }

        if(i>=nums.size()){
            return false;
        }

        int take=solve(i+1,nums,target-nums[i]);
        int skip=solve(i+1,nums,target);

        return take||skip;
    }
    bool canPartition(vector<int>& nums) {

        int n=nums.size();

        if(!n){
            return false;
        }

        int sum=accumulate(nums.begin(),nums.end(),0);

        if((sum)%2!=0){
            return false;
        }

        return solve(0,nums,sum/2);
        
    }
};
