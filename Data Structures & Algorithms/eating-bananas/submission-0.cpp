class Solution {
public:
    bool check(int k,int h,vector<int>&piles){

        int total=0;

        for(int i=0;i<piles.size();i++){
            total+=((piles[i]+k-1)/k);
        }

        return total<=h;





    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int mx=*max_element(piles.begin(),piles.end());


        int l=1,r=mx;
        int ans=-1;

        while(l<=r){
            int mid=l+(r-l)/2;


            if(check(mid,h,piles)){
                ans=mid;
                r=mid-1;
            }

            else{
                l=mid+1;
            }
        }

        return ans;
        
    }
};
