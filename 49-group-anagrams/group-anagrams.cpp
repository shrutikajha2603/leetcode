class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;
        
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(strs[i].begin(),strs[i].end());
                anagramGroups[strs[i]].push_back(s);
        }
        
        vector<vector<string>> result;
        for (auto pair : anagramGroups) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};
