#include <vector>

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            int c = 1; 
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    c++;
                }
            }
            double per = static_cast<double>(c) / n * 100;
            
            if (per > 25.0) {
                return arr[i];
            }
        }
        return -1; 
    }
};
