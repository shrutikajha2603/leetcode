class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result;
        unordered_set<int> s(nums1.begin(), nums1.end());
        
        for(int num : nums2){
            if(s.find(num) != s.end()){
                result.insert(num);
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};