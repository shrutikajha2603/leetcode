class Solution {
public:
    int calculateElementSum(const vector<int>& nums) {
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        return sum;
    }

    int calculateDigitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10; 
            num /= 10;      
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int elementSum = calculateElementSum(nums);
        int digitSum = 0;

        for (int num : nums) {
            digitSum += calculateDigitSum(num);
        }
        return abs(elementSum - digitSum);    
    }
};