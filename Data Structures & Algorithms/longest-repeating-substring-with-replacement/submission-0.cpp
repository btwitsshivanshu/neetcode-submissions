class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int maxlen=0;

        int i=0,j=0;

        int mxf=0;
        unordered_map<char,int>mp;

        while(i<n && j<n){

            mp[s[j]]++;

            mxf=max(mxf,mp[s[j]]);

            if((j-i+1)-mxf>k){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;

            }

            maxlen=max(maxlen,j-i+1);
            j++;
        }

        return maxlen;
    }
};
