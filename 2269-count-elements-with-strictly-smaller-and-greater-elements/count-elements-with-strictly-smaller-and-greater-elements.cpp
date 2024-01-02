class Solution {
public:
    int countElements(vector<int>& nums) {
        int c=0;
        for(int i=0; i<nums.size(); i++){
            bool greater=false, smaller=false;
            for(int j=0; j<nums.size(); j++){
                if(nums[j]>nums[i]) greater=true;
                else if(nums[j]<nums[i]) smaller=true;
            }
            if(greater && smaller) c++;
        }
        return c;
    }
};