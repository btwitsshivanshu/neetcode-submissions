class Solution {
public:
    // int solve(int i, int j, string &s1, string &s2){

    //     if(i>=s1.size() || j>=s2.size()){
    //         return 0;
    //     }

    //     if(s1[i]==s2[j]){
    //         return 1 +solve(i+1,j+1,s1,s2);
    //     }


    //     int take_s1=solve(i+1,j,s1,s2);
    //     int take_s2=solve(i,j+1,s1,s2);

    //     return max(take_s1,take_s2);
    // }
    int longestCommonSubsequence(string s1, string s2) {

        int n=s1.size();
        int m=s2.size();

        // vector<vector<int>>dp(n+1,vector<int>(m+1,0));

        vector<int>curr(m+1);
        vector<int>next(m+1);

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){

                if(s1[i]==s2[j]){
                    curr[j]= 1 +next[j+1];
                }

                else{

                    int take_s1=next[j];
                    int take_s2=curr[j+1];

                    curr[j]= max(take_s1,take_s2);


                }


            }

            next=curr;
        }

        return next[0];
        
    }
};
