class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        vector<int>ans;

        for(auto ele:nums){

            auto it=lower_bound(ans.begin(),ans.end(),ele);

            if(ans.empty() ||it==ans.end()){
                ans.push_back(ele);
                
            }
            else{
                *it=ele;
            }
            
        }

        return ans.size();
        
    }
};
