class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int> seen;

        for (int i = 0; i < n; i++) {
            if (seen.count(2 * arr[i]) || (arr[i] % 2 == 0 && seen.count(arr[i] / 2))) {
                return true;
            }
            seen.insert(arr[i]);
        }

        return false;
    }
};