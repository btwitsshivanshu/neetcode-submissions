class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n=s.size();

        if(n==1||n==0) return n;

        unordered_map<char,int>freq;

        int maxlen=0;
        int i=0,j=0;

        while(i<n && j<n){

            freq[s[j]]++;

            while(i<j && freq[s[j]]>1){
                freq[s[i]]--;
                i++;
            }

            maxlen=max(maxlen,j-i+1);

            j++;

        }

        return maxlen;
        
    }
};
