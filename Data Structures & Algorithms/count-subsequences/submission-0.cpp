class Solution {
public:
    int solve(int i, int j, string &s ,string &t){
        if(j>=t.size()) return 1;
        if(i>=s.size()) return 0;


        int take=0;
        int skip=0;

        if(s[i]==t[j]){
           take=solve(i+1,j+1,s,t);
           skip=solve(i+1,j,s,t);
        }
        skip=solve(i+1,j,s,t);

        return take+skip;
    }
    int numDistinct(string s, string t) {

        if(s.size()<t.size()){
            return 0;
        }


        return solve(0,0,s,t);
        
    }
};
