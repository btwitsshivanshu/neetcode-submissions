class Solution {
public:
    int solve(int i, vector<int>&nums){

        if(i>=nums.size()-1){
            return 0;
        }


        // int take=0;
        int mn=INT_MAX;

        for(int j=1;j<=nums[i];j++){

            int jumps = solve(i + j, nums);

            if(jumps != INT_MAX)
                mn = min(mn, 1 + jumps);
        }

        return mn;

    }
    int jump(vector<int>& nums) {

        return solve(0,nums);
        
    }
};
