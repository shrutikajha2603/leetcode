class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int repeat = -1, miss = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                repeat = nums[i];
            }
            if (nums[i + 1] - nums[i] > 1) {
                miss = nums[i] + 1;
            }
        }

        if (nums.back()!= nums.size()) {
            miss = nums.size();
        }

        return {repeat, miss};
    }
};