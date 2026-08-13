class Solution {
public:
    string minWindow(string s, string t) {

        int n=s.size();
        int required=t.size();



        unordered_map<char,int>mp;

        int mn=INT_MAX;
        int idx=0;

        int i=0;
        int j=0;

        for(auto ele:t){
            mp[ele]++;
        }

        while(i<n && j<n){

            if(mp[s[j]]>0){
                required--;
            }

            mp[s[j]]--;


            while(required==0){
                int currlen=j-i+1;
                if(currlen<mn){

                    mn=min(mn,currlen);
                    idx=i;

                }

                mp[s[i]]++;
                if(mp[s[i]]>0){
                    required++;
                }
                i++;
                




            }

            j++;



        }

        return mn==INT_MAX?"":s.substr(idx,mn);
        
    }
};