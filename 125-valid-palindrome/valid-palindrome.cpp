class Solution {
public:
    bool isPalindrome(string s) {
        string S;
        for (char c : s) {
            if (isalnum(c)) {
                S.push_back(tolower(c));
            }
        }
        int left = 0, right = S.size() - 1;
        while (left < right) {
            if (S[left] != S[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};