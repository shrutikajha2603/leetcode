class Solution {
public:
    int minOperations(string s) {
        int c0 = 0;
        int c1 = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                if (s[i] == '0') {
                    c1++;
                } else {
                    c0++;
                }
            } else {
                if (s[i] == '1') {
                    c1++;
                } else {
                    c0++;
                }
            }
        }
        
        return min(c0, c1);
    }
};