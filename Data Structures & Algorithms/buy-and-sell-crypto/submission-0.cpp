class Solution {
public:
    int maxProfit(vector<int>& nums) {

        int n=nums.size();

        int mx=0;
        int pick=nums[0];

        

        for(int i=1;i<n;i++){

            if(nums[i]<pick)
            {
                pick=nums[i];

            }
            else{
                mx=max(mx,nums[i]-pick);
                
            }

        }

        return mx;




        
    }
};
