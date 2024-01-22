class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j]) {
                    ans.push_back(nums[i]);
                    break;
                }
            }
        }  
        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;
        for(int num : nums) {
            actualSum += num;
        }
        int missingNum = expectedSum - (actualSum - ans[0]);
        ans.push_back(missingNum);

        return ans;  
    }
};