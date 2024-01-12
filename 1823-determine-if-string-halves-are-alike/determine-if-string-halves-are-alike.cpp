class Solution {
public:
    bool halvesAreAlike(string s) {
        auto countVowels = [](const string& str) {
            unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
            int count = 0;
            for (char ch : str) {
                if (vowels.find(ch) != vowels.end()) {
                    count++;
                }
            }
            return count;
        };

        int mid = s.length() / 2;
        string a = s.substr(0, mid);
        string b = s.substr(mid);

        return countVowels(a) == countVowels(b);
    }
};