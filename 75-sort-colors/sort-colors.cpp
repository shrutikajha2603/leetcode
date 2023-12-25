class Solution {
public:
    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void sortColors(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++){
            int j = i;
            for (int k = i + 1; k < nums.size(); k++) {
                if (nums[k] < nums[j])
                    j = k;
            }
            swap(&nums[j], &nums[i]);
        }
    }
};