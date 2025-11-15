class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq1;
        for(char c : s){
            freq1[c]++;
        }

        for(char c : t){
            freq1[c]--;
        }

        for(auto p:freq1){
            if(p.second!=0) return false;
        }
        return true;
    }
};