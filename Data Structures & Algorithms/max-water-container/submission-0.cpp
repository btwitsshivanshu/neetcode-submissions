class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mx=INT_MIN;

        int n=heights.size();

        int i=0, j=n-1;

        while(i<j){
            int width=j-i;

            int area=min(heights[i],heights[j])*width;

            mx=max(area,mx);

            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }

        }

        return mx;
        
    }
};
