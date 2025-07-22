class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;
        for(auto it : nums){
            freq[it]++;
        }

        int th = floor(nums.size()/3);
        for(auto& it : freq){
            if(it.second>th){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};