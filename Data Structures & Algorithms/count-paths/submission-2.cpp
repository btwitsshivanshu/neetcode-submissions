class Solution {
public:
    int solve(int i, int j, int m , int n){

        if(i<0 || i>=m || j<0 || j>=n){
            return 0;
        }

        if(i==m-1 && j==n-1){
            return 1;
        }

        int down= solve(i+1,j,m,n);
        int right= solve(i,j+1,m,n);

        return down+right;
    }
    int uniquePaths(int m, int n) {

        vector<vector<int>>dp(m+1,vector<int>(n+1,0));


        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){

                if(i==m-1 && j==n-1){
                    return 1;
                }

                else{
                    

                }

            }
        }

        return solve(0,0,m,n);

        
    }
};
