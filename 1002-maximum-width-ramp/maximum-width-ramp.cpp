class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int> min_indices;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            if (min_indices.empty() || nums[min_indices.top()] > nums[i]) {
                min_indices.push(i);
            }
        }
        int max_width = 0;
        for (int j = n - 1; j >= 0; --j) {
            while (!min_indices.empty() && nums[min_indices.top()] <= nums[j]) {
                max_width = max(max_width, j - min_indices.top());
                min_indices.pop();
            }
        }
        
        return max_width;
    }
};