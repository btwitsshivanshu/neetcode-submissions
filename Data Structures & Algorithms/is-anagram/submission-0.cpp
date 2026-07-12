class Solution {
public:
    bool isAnagram(string s, string t) {

        vector<int>freq1(26,0);
        vector<int>freq2(26,0);


        for(auto ele:s){
            freq1[ele-'a']++;
        }

        for(auto ele:t){
            freq2[ele-'a']++;
        }

        return freq1==freq2;
        
    }
};
