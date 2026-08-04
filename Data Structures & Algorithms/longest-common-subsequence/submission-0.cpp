class Solution {
public:
    int solve(int i, int j, string &s1, string &s2){

        if(i>=s1.size() || j>=s2.size()){
            return 0;
        }

        if(s1[i]==s2[j]){
            return 1 +solve(i+1,j+1,s1,s2);
        }


        int take_s1=solve(i+1,j,s1,s2);
        int take_s2=solve(i,j+1,s1,s2);

        return max(take_s1,take_s2);
    }
    int longestCommonSubsequence(string s1, string s2) {

        return solve(0,0,s1,s2);
        
    }
};
