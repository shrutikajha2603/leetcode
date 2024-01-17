class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        
        if (n <= 1) {
            return true;
        }
        int occurrences[n];
        int counts[n];
        occurrences[0] = arr[0];
        counts[0] = 1;

        int uniqueCount = 1;
        for (int i = 1, j = 0; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                counts[j]++;
            } else {
                j++;
                occurrences[j] = arr[i];
                counts[j] = 1;
                uniqueCount++;
            }
        }

        sort(counts, counts + uniqueCount);
        for (int i = 1; i < uniqueCount; ++i) {
            if (counts[i] == counts[i - 1]) {
                return false;
            }
        }

        return true;
    }
};
