class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        vector<int>freq1(26,0);
        vector<int>freq2(26,0);

        for(auto ele:s1){
            freq1[ele-'a']++;
        }

        int i=0,j=0;

        int n=s2.size();

        while(i<n && j<n){
            freq2[s2[j]-'a']++;

            while(freq2>freq1){
                freq2[s2[i]-'a']--;
                i++;
            }

            if(freq2==freq1) return true;

            j++;
        }

        return false;
        
    }
};
