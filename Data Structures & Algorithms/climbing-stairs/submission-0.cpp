class Solution {
public:
    int solve(int i, int n){
        if(i>=n){
            return 1;
        }

        int take_one=solve(i+1,n);
        int take_two=solve(i+2,n);

        return take_one +take_two;
    }
    int climbStairs(int n) {
        return solve(1,n);
        
    }
};
