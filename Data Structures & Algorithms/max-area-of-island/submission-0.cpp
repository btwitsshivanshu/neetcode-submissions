class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>&grid,int &count){
        if(i>=grid.size() ||i<0 ||j<0 ||j>=grid[0].size()||grid[i][j]!=1){
            return;
        }

        grid[i][j]=-1;

        count++;

        dfs(i+1,j,grid,count);
        dfs(i,j+1,grid,count);
        dfs(i-1,j,grid,count);
        dfs(i,j-1,grid,count);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();

        int mx=INT_MIN;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int count=0;
                    dfs(i,j,grid,count);
                    mx=max(mx,count);
                }
            }
        }

        return mx==INT_MIN?0:mx;


        
    }
};
