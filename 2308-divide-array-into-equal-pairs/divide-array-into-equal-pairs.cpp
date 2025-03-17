class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int it : nums){
            freq[it]++;
        }
        for(auto& i : freq){
            if(i.second % 2 != 0) return false;
        }
        return true;
    }
};