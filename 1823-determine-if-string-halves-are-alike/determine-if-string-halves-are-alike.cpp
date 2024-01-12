class Solution {
public:
    bool halvesAreAlike(std::string s) {
        auto countVowels = [](const std::string& str) {
            std::unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
            int count = 0;
            for (char ch : str) {
                if (vowels.find(ch) != vowels.end()) {
                    count++;
                }
            }
            return count;
        };

        int mid = s.length() / 2;
        std::string a = s.substr(0, mid);
        std::string b = s.substr(mid);

        return countVowels(a) == countVowels(b);
    }
};