class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ss;
        int spaceIndex=0;
        for (int i = 0; i < s.size(); i++) {
            if (spaceIndex < spaces.size() && i == spaces[spaceIndex]) {
                ss += ' '; 
                spaceIndex++;
            }
            ss += s[i]; 
        }

        return ss; 
    }
};