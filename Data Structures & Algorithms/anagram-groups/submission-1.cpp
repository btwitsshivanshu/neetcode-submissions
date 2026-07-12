class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        if(strs.empty()) return {{""}};

        map<vector<int>,vector<string>>mp;

        vector<vector<string>>ans;


        for(int i=0;i<strs.size();i++){

            vector<int>freq(26,0);

            for(auto ele:strs[i]){
                freq[ele-'a']++;

            }

            
            mp[freq].push_back(strs[i]);
            


        }

        for(auto ele:mp){
            ans.push_back(ele.second);
        }

        return ans;
        
    }
};
