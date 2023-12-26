class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(auto i: nums) if(i != nums[0] && i != nums[n-1]) return i;
        return -1;
    }
};